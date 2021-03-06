// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PColgp_FieldOfHArray1OfXY_HeaderFile
#define _PColgp_FieldOfHArray1OfXY_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _DBC_BaseArray_HeaderFile
#include <DBC_BaseArray.hxx>
#endif
#ifndef _Handle_PColgp_VArrayNodeOfFieldOfHArray1OfXY_HeaderFile
#include <Handle_PColgp_VArrayNodeOfFieldOfHArray1OfXY.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Standard_NegativeValue;
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NullObject;
class gp_XY;
class PColgp_VArrayNodeOfFieldOfHArray1OfXY;
class PColgp_VArrayTNodeOfFieldOfHArray1OfXY;



Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PColgp_FieldOfHArray1OfXY);


class PColgp_FieldOfHArray1OfXY  : public DBC_BaseArray {

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   PColgp_FieldOfHArray1OfXY();
  
  Standard_EXPORT   PColgp_FieldOfHArray1OfXY(const Standard_Integer Size);
  
  Standard_EXPORT   PColgp_FieldOfHArray1OfXY(const PColgp_FieldOfHArray1OfXY& Varray);
  
  Standard_EXPORT     void Resize(const Standard_Integer Size) ;
  
  Standard_EXPORT     void Assign(const PColgp_FieldOfHArray1OfXY& Other) ;
    void operator =(const PColgp_FieldOfHArray1OfXY& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const gp_XY& Value) ;
  
  Standard_EXPORT     gp_XY& Value(const Standard_Integer Index) const;
    gp_XY& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void Destroy() ;
~PColgp_FieldOfHArray1OfXY()
{
  Destroy();
}



protected:




private: 

#ifdef CSFDB
// DBC_VArray : field
//
#endif



};





// other Inline functions and methods (like "C++: function call" methods)


#endif
