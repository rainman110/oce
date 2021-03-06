// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_ArrayOfPolylines_HeaderFile
#define _Graphic3d_ArrayOfPolylines_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic3d_ArrayOfPolylines_HeaderFile
#include <Handle_Graphic3d_ArrayOfPolylines.hxx>
#endif

#ifndef _Graphic3d_ArrayOfPrimitives_HeaderFile
#include <Graphic3d_ArrayOfPrimitives.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif



class Graphic3d_ArrayOfPolylines : public Graphic3d_ArrayOfPrimitives {

public:

  //! Creates an array of polylines, <br>
//! a polyline can be filled as: <br>
//! 1) creating a single polyline defined with his vertexs. <br>
//!    i.e: <br>
//!    myArray = Graphic3d_ArrayOfPolylines(7) <br>
//!    myArray->AddVertex(x1,y1,z1) <br>
//!      .... <br>
//!    myArray->AddVertex(x7,y7,z7) <br>
//! 2) creating separate polylines defined with a predefined <br>
//!    number of bounds and the number of vertex per bound. <br>
//!    i.e: <br>
//!    myArray = Graphic3d_ArrayOfPolylines(7,2) <br>
//!    myArray->AddBound(4) <br>
//!    myArray->AddVertex(x1,y1,z1) <br>
//!      .... <br>
//!    myArray->AddVertex(x4,y4,z4) <br>
//!    myArray->AddBound(3) <br>
//!    myArray->AddVertex(x5,y5,z5) <br>
//!      .... <br>
//!    myArray->AddVertex(x7,y7,z7) <br>
//! 3) creating a single indexed polyline defined with his vertex <br>
//!    ans edges. <br>
//!    i.e: <br>
//!    myArray = Graphic3d_ArrayOfPolylines(4,0,6) <br>
//!    myArray->AddVertex(x1,y1,z1) <br>
//!      .... <br>
//!    myArray->AddVertex(x4,y4,z4) <br>
//!    myArray->AddEdge(1) <br>
//!    myArray->AddEdge(2) <br>
//!    myArray->AddEdge(3) <br>
//!    myArray->AddEdge(1) <br>
//!    myArray->AddEdge(2) <br>
//!    myArray->AddEdge(4) <br>
//! 4) creating separate polylines defined with a predefined <br>
//!    number of bounds and the number of edges per bound. <br>
//!    i.e: <br>
//!    myArray = Graphic3d_ArrayOfPolylines(6,4,14) <br>
//!    myArray->AddBound(3) <br>
//!    myArray->AddVertex(x1,y1,z1) <br>
//!    myArray->AddVertex(x2,y2,z2) <br>
//!    myArray->AddVertex(x3,y3,z3) <br>
//!    myArray->AddEdge(1) <br>
//!    myArray->AddEdge(2) <br>
//!    myArray->AddEdge(3) <br>
//!    myArray->AddBound(3) <br>
//!    myArray->AddVertex(x4,y4,z4) <br>
//!    myArray->AddVertex(x5,y5,z5) <br>
//!    myArray->AddVertex(x6,y6,z6) <br>
//!    myArray->AddEdge(4) <br>
//!    myArray->AddEdge(5) <br>
//!    myArray->AddEdge(6) <br>
//!    myArray->AddBound(4) <br>
//!    myArray->AddEdge(2) <br>
//!    myArray->AddEdge(3) <br>
//!    myArray->AddEdge(5) <br>
//!    myArray->AddEdge(6) <br>
//!    myArray->AddBound(4) <br>
//!    myArray->AddEdge(1) <br>
//!    myArray->AddEdge(3) <br>
//!    myArray->AddEdge(5) <br>
//!    myArray->AddEdge(4) <br>
  Standard_EXPORT   Graphic3d_ArrayOfPolylines(const Standard_Integer maxVertexs,const Standard_Integer maxBounds = 0,const Standard_Integer maxEdges = 0,const Standard_Boolean hasVColors = Standard_False,const Standard_Boolean hasBColors = Standard_False,const Standard_Boolean hasEdgeInfos = Standard_False);




  DEFINE_STANDARD_RTTI(Graphic3d_ArrayOfPolylines)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
