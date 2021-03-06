// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2d_Point_HeaderFile
#define _Geom2d_Point_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom2d_Point_HeaderFile
#include <Handle_Geom2d_Point.hxx>
#endif

#ifndef _Geom2d_Geometry_HeaderFile
#include <Geom2d_Geometry.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class gp_Pnt2d;


//! The abstract class Point describes the common <br>
//! behavior of geometric points in 2D space. <br>
//! The Geom2d package also provides the concrete <br>
//! class Geom2d_CartesianPoint. <br>
class Geom2d_Point : public Geom2d_Geometry {

public:

  //! returns the Coordinates of <me>. <br>
  Standard_EXPORT   virtual  void Coord(Standard_Real& X,Standard_Real& Y) const = 0;
  //! returns a non persistent copy of <me> <br>
  Standard_EXPORT   virtual  gp_Pnt2d Pnt2d() const = 0;
  //! returns the X coordinate of <me>. <br>
  Standard_EXPORT   virtual  Standard_Real X() const = 0;
  //! returns  the Y coordinate of <me>. <br>
  Standard_EXPORT   virtual  Standard_Real Y() const = 0;
  //! computes the distance between <me> and <Other>. <br>
  Standard_EXPORT     Standard_Real Distance(const Handle(Geom2d_Point)& Other) const;
  //! computes the square distance between <me> and <Other>. <br>
  Standard_EXPORT     Standard_Real SquareDistance(const Handle(Geom2d_Point)& Other) const;




  DEFINE_STANDARD_RTTI(Geom2d_Point)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
