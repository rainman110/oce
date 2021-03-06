// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_GeomTool_HeaderFile
#define _TopOpeBRepTool_GeomTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopOpeBRepTool_OutCurveType_HeaderFile
#include <TopOpeBRepTool_OutCurveType.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif



class TopOpeBRepTool_GeomTool  {
public:

  DEFINE_STANDARD_ALLOC

  //! Boolean flags <CompC3D>, <CompPC1>, <CompPC2> <br>
//!          indicate whether  the  corresponding result curves <br>
//!          <C3D>, <PC1>, <PC2> of MakeCurves method  must or not <br>
//!          be computed from an intersection line <L>. <br>
//!          When  the line <L> is a walking one, <TypeC3D> is the <br>
//!          kind  of the 3D curve <C3D>  to  compute  : <br>
//!          - BSPLINE1 to compute  a BSpline of  degree 1 on the <br>
//!          walking   points  of  <L>, <br>
//!          - APPROX  to build  an  approximation curve on the <br>
//!          walking points of <L>. <br>
  Standard_EXPORT   TopOpeBRepTool_GeomTool(const TopOpeBRepTool_OutCurveType TypeC3D = TopOpeBRepTool_BSPLINE1,const Standard_Boolean CompC3D = Standard_True,const Standard_Boolean CompPC1 = Standard_True,const Standard_Boolean CompPC2 = Standard_True);
  
  Standard_EXPORT     void Define(const TopOpeBRepTool_OutCurveType TypeC3D,const Standard_Boolean CompC3D,const Standard_Boolean CompPC1,const Standard_Boolean CompPC2) ;
  
  Standard_EXPORT     void Define(const TopOpeBRepTool_OutCurveType TypeC3D) ;
  
  Standard_EXPORT     void DefineCurves(const Standard_Boolean CompC3D) ;
  
  Standard_EXPORT     void DefinePCurves1(const Standard_Boolean CompPC1) ;
  
  Standard_EXPORT     void DefinePCurves2(const Standard_Boolean CompPC2) ;
  
  Standard_EXPORT     void Define(const TopOpeBRepTool_GeomTool& GT) ;
  
  Standard_EXPORT     void GetTolerances(Standard_Real& tol3d,Standard_Real& tol2d) const;
  
  Standard_EXPORT     void SetTolerances(const Standard_Real tol3d,const Standard_Real tol2d) ;
  
  Standard_EXPORT     void GetTolerances(Standard_Real& tol3d,Standard_Real& tol2d,Standard_Boolean& relative) const;
  
  Standard_EXPORT     void SetTolerances(const Standard_Real tol3d,const Standard_Real tol2d,const Standard_Boolean relative) ;
  
  Standard_EXPORT     Standard_Integer NbPntMax() const;
  
  Standard_EXPORT     void SetNbPntMax(const Standard_Integer NbPntMax) ;
  
  Standard_EXPORT     TopOpeBRepTool_OutCurveType TypeC3D() const;
  
  Standard_EXPORT     Standard_Boolean CompC3D() const;
  
  Standard_EXPORT     Standard_Boolean CompPC1() const;
  
  Standard_EXPORT     Standard_Boolean CompPC2() const;





protected:



TopOpeBRepTool_OutCurveType myTypeC3D;
Standard_Boolean myCompC3D;
Standard_Boolean myCompPC1;
Standard_Boolean myCompPC2;


private:



Standard_Real myTol3d;
Standard_Real myTol2d;
Standard_Boolean myRelativeTol;
Standard_Integer myNbPntMax;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
