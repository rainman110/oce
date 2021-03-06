// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PrsMgr_Prs_HeaderFile
#define _PrsMgr_Prs_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_PrsMgr_Prs_HeaderFile
#include <Handle_PrsMgr_Prs.hxx>
#endif

#ifndef _PrsMgr_Presentation3dPointer_HeaderFile
#include <PrsMgr_Presentation3dPointer.hxx>
#endif
#ifndef _Prs3d_Presentation_HeaderFile
#include <Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Graphic3d_StructureManager_HeaderFile
#include <Handle_Graphic3d_StructureManager.hxx>
#endif
#ifndef _PrsMgr_TypeOfPresentation3d_HeaderFile
#include <PrsMgr_TypeOfPresentation3d.hxx>
#endif
#ifndef _Handle_Graphic3d_Structure_HeaderFile
#include <Handle_Graphic3d_Structure.hxx>
#endif
#ifndef _Handle_Graphic3d_DataStructureManager_HeaderFile
#include <Handle_Graphic3d_DataStructureManager.hxx>
#endif
class Graphic3d_StructureManager;
class Graphic3d_Structure;
class Graphic3d_DataStructureManager;
class TColStd_Array2OfReal;



class PrsMgr_Prs : public Prs3d_Presentation {

public:

  
  Standard_EXPORT   PrsMgr_Prs(const Handle(Graphic3d_StructureManager)& aStructureManager,const PrsMgr_Presentation3dPointer& aPresentation,const PrsMgr_TypeOfPresentation3d aTypeOfPresentation3d);
  
  Standard_EXPORT     Handle_Graphic3d_Structure Compute(const Handle(Graphic3d_DataStructureManager)& aProjector) ;
  //! the "degenerated" Structure is displayed with <br>
//!          a transformation defined by <AMatrix> <br>
//!          which is not a Pure Translation. <br>
//!          We have to take in account this Transformation <br>
//!          in the computation of hidden line removal... <br>
//!          returns a filled Graphic Structure. <br>
  Standard_EXPORT     Handle_Graphic3d_Structure Compute(const Handle(Graphic3d_DataStructureManager)& aProjector,const TColStd_Array2OfReal& AMatrix) ;
  //! No need to return a structure, just to fill <br>
//!          <ComputedStruct> .... <br>
  Standard_EXPORT     void Compute(const Handle(Graphic3d_DataStructureManager)& aProjector,Handle(Graphic3d_Structure)& ComputedStruct) ;
  //! No Need to return a Structure, just to <br>
//!          Fill <aStructure>. The Trsf has to be taken in account <br>
//!          in the computation (Rotation Part....) <br>
  Standard_EXPORT     void Compute(const Handle(Graphic3d_DataStructureManager)& aProjector,const TColStd_Array2OfReal& AMatrix,Handle(Graphic3d_Structure)& aStructure) ;




  DEFINE_STANDARD_RTTI(PrsMgr_Prs)

protected:




private: 


PrsMgr_Presentation3dPointer myPresentation3d;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
