// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeLine_HeaderFile
#define _GeomToStep_MakeLine_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepGeom_Line_HeaderFile
#include <Handle_StepGeom_Line.hxx>
#endif
#ifndef _GeomToStep_Root_HeaderFile
#include <GeomToStep_Root.hxx>
#endif
#ifndef _Handle_Geom_Line_HeaderFile
#include <Handle_Geom_Line.hxx>
#endif
#ifndef _Handle_Geom2d_Line_HeaderFile
#include <Handle_Geom2d_Line.hxx>
#endif
class StepGeom_Line;
class StdFail_NotDone;
class gp_Lin;
class gp_Lin2d;
class Geom_Line;
class Geom2d_Line;


//! This class implements the mapping between classes <br>
//!          Line from Geom and Lin from gp, and the class <br>
//!          Line from StepGeom which describes a line from <br>
//!          Prostep. <br>
class GeomToStep_MakeLine  : public GeomToStep_Root {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   GeomToStep_MakeLine(const gp_Lin& L);
  
  Standard_EXPORT   GeomToStep_MakeLine(const gp_Lin2d& L);
  
  Standard_EXPORT   GeomToStep_MakeLine(const Handle(Geom_Line)& C);
  
  Standard_EXPORT   GeomToStep_MakeLine(const Handle(Geom2d_Line)& C);
  
  Standard_EXPORT    const Handle_StepGeom_Line& Value() const;





protected:





private:



Handle_StepGeom_Line theLine;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
