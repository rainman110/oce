// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#include <BRepBlend_Line.hxx>

#ifndef _Standard_Type_HeaderFile
#include <Standard_Type.hxx>
#endif

#ifndef _Standard_OutOfRange_HeaderFile
#include <Standard_OutOfRange.hxx>
#endif
#ifndef _Adaptor3d_HVertex_HeaderFile
#include <Adaptor3d_HVertex.hxx>
#endif
#ifndef _Adaptor2d_HCurve2d_HeaderFile
#include <Adaptor2d_HCurve2d.hxx>
#endif
#ifndef _BRepBlend_PointOnRst_HeaderFile
#include <BRepBlend_PointOnRst.hxx>
#endif
#ifndef _BRepBlend_SequenceOfPointOnRst_HeaderFile
#include <BRepBlend_SequenceOfPointOnRst.hxx>
#endif
#ifndef _BRepBlend_Extremity_HeaderFile
#include <BRepBlend_Extremity.hxx>
#endif
#ifndef _Blend_Point_HeaderFile
#include <Blend_Point.hxx>
#endif

 


IMPLEMENT_STANDARD_TYPE(BRepBlend_Line)
IMPLEMENT_STANDARD_SUPERTYPE_ARRAY()
  STANDARD_TYPE(MMgt_TShared),
  STANDARD_TYPE(Standard_Transient),

IMPLEMENT_STANDARD_SUPERTYPE_ARRAY_END()
IMPLEMENT_STANDARD_TYPE_END(BRepBlend_Line)


IMPLEMENT_DOWNCAST(BRepBlend_Line,Standard_Transient)
IMPLEMENT_STANDARD_RTTI(BRepBlend_Line)


#define TheVertex Handle_Adaptor3d_HVertex
#define TheVertex_hxx <Adaptor3d_HVertex.hxx>
#define TheArc Handle_Adaptor2d_HCurve2d
#define TheArc_hxx <Adaptor2d_HCurve2d.hxx>
#define ThePointOnRst BRepBlend_PointOnRst
#define ThePointOnRst_hxx <BRepBlend_PointOnRst.hxx>
#define TheSequenceOfPointOnRst BRepBlend_SequenceOfPointOnRst
#define TheSequenceOfPointOnRst_hxx <BRepBlend_SequenceOfPointOnRst.hxx>
#define TheExtremity BRepBlend_Extremity
#define TheExtremity_hxx <BRepBlend_Extremity.hxx>
#define Blend_Line BRepBlend_Line
#define Blend_Line_hxx <BRepBlend_Line.hxx>
#define Handle_Blend_Line Handle_BRepBlend_Line
#define Blend_Line_Type_() BRepBlend_Line_Type_()
#include <Blend_Line.gxx>

