// Created on: 1996-03-01
// Created by: Modelistation
// Copyright (c) 1996-1999 Matra Datavision
// Copyright (c) 1999-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.


#ifndef _TopOpeBRepBuild_SplitShapes_HeaderFile
#define _TopOpeBRepBuild_SplitShapes_HeaderFile

#include <Standard_ProgramError.hxx>


static Standard_Boolean FUN_touched(const TopOpeBRepDS_DataStructure& BDS,const TopoDS_Edge& EOR)
{
  TopoDS_Vertex vf,vl; TopExp::Vertices(EOR,vf,vl);
  Standard_Boolean hvf = BDS.HasShape(vf);
  Standard_Boolean hvl = BDS.HasShape(vl);
  return (hvf || hvl);
}

//=======================================================================
//function : SplitShapes
//purpose  : 
//=======================================================================
void TopOpeBRepBuild_Builder::SplitShapes(TopOpeBRepTool_ShapeExplorer& Ex,
					  const TopAbs_State ToBuild1, 
					  const TopAbs_State ToBuild2,
					  TopOpeBRepBuild_ShapeSet& aSet,
					  const Standard_Boolean RevOri)
{
  TopoDS_Shape aShape;
  TopAbs_Orientation newori;

  for (; Ex.More(); Ex.Next()) {
    aShape = Ex.Current();

    // compute new orientation <newori> to give to the new shapes
    newori = Orient(myBuildTool.Orientation(aShape),RevOri);

    TopAbs_ShapeEnum t = aShape.ShapeType();

#ifdef DEB
    if (TopOpeBRepBuild_GettraceSHEX()) GdumpEXP(Ex);
#endif

    if      ( t == TopAbs_SOLID || t == TopAbs_SHELL )
      SplitSolid(aShape,ToBuild1,ToBuild2);
    else if ( t == TopAbs_FACE  ) SplitFace(aShape,ToBuild1,ToBuild2);
    else if ( t == TopAbs_EDGE  ) SplitEdge(aShape,ToBuild1,ToBuild2);
    else continue;

    if ( IsSplit(aShape,ToBuild1) ) {
      TopoDS_Shape newShape;
      TopTools_ListIteratorOfListOfShape It;
      //----------------------- IFV
      Standard_Boolean IsLSon = Standard_False;
      //----------------------- IFV
      const TopTools_ListOfShape& LS = Splits(aShape,ToBuild1);
      //----------------------- IFV
      if(t == TopAbs_EDGE && ToBuild1 == TopAbs_IN && LS.Extent() == 0) {
	const TopTools_ListOfShape& LSon = Splits(aShape,TopAbs_ON);
	It.Initialize(LSon);
	IsLSon = Standard_True;
      }
      else {
	It.Initialize(LS);
      }
      //----------------------- IFV
      for (; It.More(); It.Next()) {
	newShape = It.Value();
	myBuildTool.Orientation(newShape,newori);
#ifdef DEB
//	TopAbs_ShapeEnum tns = TopType(newShape);
#endif
	//----------------------- IFV
	if(IsLSon) {
	  Standard_Boolean add = Standard_True;
	  if ( !myListOfFace.IsEmpty()) { // 2d pur
	    add = KeepShape(newShape,myListOfFace,ToBuild1);
	  }
	  if(add) aSet.AddStartElement(newShape);

	}
	else {
	//----------------------- IFV
	  aSet.AddStartElement(newShape);
	}
      }
    }
    else {
      // aShape n'a pas de devenir de split par ToBuild1
      // on construit les parties ToBuild1 de aShape (de S1)
      Standard_Boolean add = Standard_True;
      Standard_Boolean testkeep = Standard_False;
      Standard_Boolean isedge = (t == TopAbs_EDGE);
      Standard_Boolean hs = (myDataStructure->HasShape(aShape));
      Standard_Boolean hg = (myDataStructure->HasGeometry(aShape));
      
      testkeep = isedge && hs && (!hg);
      
      // xpu010399 : USA60299 (!hs)&&(!hg), but vertex on bound is touched (v7)
      //             -> testkeep
      Standard_Boolean istouched = isedge && (!hs) && (!hg);
      if (istouched) istouched = FUN_touched(myDataStructure->DS(),TopoDS::Edge(aShape));
      testkeep = testkeep || istouched;

      if (testkeep) { 
	if ( !myListOfFace.IsEmpty()) { // 2d pur
	  Standard_Boolean keep = KeepShape(aShape,myListOfFace,ToBuild1);
	  add = keep;
	}
	else { // 3d
	  // on classifie en solide uniqt si 
	  // E dans la DS et E a ete purgee de ses interfs car en bout
	  TopoDS_Shape sol;
	  if (STATIC_SOLIDINDEX == 1) sol = myShape2;
	  else                        sol = myShape1;
	  if ( !sol.IsNull() ) {	    
	    Standard_Real first,last;
	    Handle(Geom_Curve) C3D;
	    C3D = BRep_Tool::Curve(TopoDS::Edge(aShape),first,last);
	    if ( !C3D.IsNull() ) {
	      Standard_Real tt = 0.127956477;
	      Standard_Real par = (1-tt)*first + tt*last;
	      gp_Pnt P3D = C3D->Value(par);
	      Standard_Real tol3d = Precision::Confusion();
	      BRepClass3d_SolidClassifier SCL(sol,P3D,tol3d); 
	      TopAbs_State state = SCL.State();
	      add = (state == ToBuild1);
	    }
	    else {
	      Standard_ProgramError::Raise("SplitShapes no 3D curve on edge");
	      // NYI pas de courbe 3d : prendre un point sur (courbe 2d,face)
	    }
	  }
	  else { //  sol.IsNull
	    add = Standard_True;
	  }
	}
      }
      if ( add ) {
	myBuildTool.Orientation(aShape,newori);
	aSet.AddElement(aShape);
      }
    }

  } // Ex.More

} // SplitShapes

#endif
