// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _V2d_Viewer_HeaderFile
#define _V2d_Viewer_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_V2d_Viewer_HeaderFile
#include <Handle_V2d_Viewer.hxx>
#endif

#ifndef _Handle_Aspect_ColorMap_HeaderFile
#include <Handle_Aspect_ColorMap.hxx>
#endif
#ifndef _Handle_Aspect_TypeMap_HeaderFile
#include <Handle_Aspect_TypeMap.hxx>
#endif
#ifndef _Handle_Aspect_WidthMap_HeaderFile
#include <Handle_Aspect_WidthMap.hxx>
#endif
#ifndef _Handle_Aspect_FontMap_HeaderFile
#include <Handle_Aspect_FontMap.hxx>
#endif
#ifndef _Handle_Aspect_MarkMap_HeaderFile
#include <Handle_Aspect_MarkMap.hxx>
#endif
#ifndef _Handle_Graphic2d_View_HeaderFile
#include <Handle_Graphic2d_View.hxx>
#endif
#ifndef _TColStd_ListOfTransient_HeaderFile
#include <TColStd_ListOfTransient.hxx>
#endif
#ifndef _TColStd_ListIteratorOfListOfTransient_HeaderFile
#include <TColStd_ListIteratorOfListOfTransient.hxx>
#endif
#ifndef _Handle_V2d_RectangularGrid_HeaderFile
#include <Handle_V2d_RectangularGrid.hxx>
#endif
#ifndef _Handle_V2d_CircularGrid_HeaderFile
#include <Handle_V2d_CircularGrid.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Aspect_GridType_HeaderFile
#include <Aspect_GridType.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Viewer_Viewer_HeaderFile
#include <Viewer_Viewer.hxx>
#endif
#ifndef _Handle_Aspect_GraphicDevice_HeaderFile
#include <Handle_Aspect_GraphicDevice.hxx>
#endif
#ifndef _Standard_ExtString_HeaderFile
#include <Standard_ExtString.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_V2d_View_HeaderFile
#include <Handle_V2d_View.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _Handle_Aspect_Grid_HeaderFile
#include <Handle_Aspect_Grid.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Aspect_GridDrawMode_HeaderFile
#include <Aspect_GridDrawMode.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
class Aspect_ColorMap;
class Aspect_TypeMap;
class Aspect_WidthMap;
class Aspect_FontMap;
class Aspect_MarkMap;
class Graphic2d_View;
class V2d_RectangularGrid;
class V2d_CircularGrid;
class V2d_View;
class Aspect_GraphicDevice;
class Aspect_Grid;
class Quantity_Color;



//! This class defines a 2D viewer which manages one <br>
//! 2D view at least and the attributes of this view (ex: ColorMap, etc.). <br>
class V2d_Viewer : public Viewer_Viewer {

public:

  
//! Constructs a viewer object defined by the graphic <br>
//! device aGraphicDevice that determines the screen <br>
//! attributes, a default view and the name aName. <br>
  Standard_EXPORT   V2d_Viewer(const Handle(Aspect_GraphicDevice)& aGraphicDevice,const Standard_ExtString aName,const Standard_CString aDomain = "");
  
//! Constructs a viewer object defined by the graphic <br>
//! device aGraphicDevice that determines the screen <br>
//! attributes, the first view aView and the name aName. <br>
  Standard_EXPORT   V2d_Viewer(const Handle(Aspect_GraphicDevice)& aGraphicDevice,const Handle(Graphic2d_View)& aView,const Standard_ExtString aName,const Standard_CString aDomain = "");
  //! Adds another 2D view to the viewer. <br>
  Standard_EXPORT     void AddView(const Handle(V2d_View)& aView) ;
  //! Removes the view aView from the viewer. <br>
  Standard_EXPORT     void RemoveView(const Handle(V2d_View)& aView) ;
  //! Updates the display of all views of the viewer. <br>
  Standard_EXPORT     void Update() ;
  //! Updates the most recent changes in all the active views of the viewer. <br>
  Standard_EXPORT     void UpdateNew() ;
  
//! Replaces the default color map of the viewer with the <br>
//! new color map aColorMap. <br>
  Standard_EXPORT     void SetColorMap(const Handle(Aspect_ColorMap)& aColorMap) ;
  
//! Replaces the default type map of the viewer with the <br>
//! new type map aTypeMap. <br>
  Standard_EXPORT     void SetTypeMap(const Handle(Aspect_TypeMap)& aTypeMap) ;
  
//! Replaces the default width map of the viewer with the <br>
//! new width map aWidthMap. <br>
  Standard_EXPORT     void SetWidthMap(const Handle(Aspect_WidthMap)& aWidthMap) ;
  
//! Replaces the default font map of the viewer with the <br>
//! new font map aFontMap. When useMFT is equal to <br>
//! Standard_True, MDTV fonts are used instead of system fonts. <br>
  Standard_EXPORT     void SetFontMap(const Handle(Aspect_FontMap)& aFontMap,const Standard_Boolean useMFT = Standard_True) ;
  
//! Replaces the default mark map of the viewer with the <br>
//! new mark map aMarkMap. <br>
  Standard_EXPORT     void SetMarkMap(const Handle(Aspect_MarkMap)& aMarkMap) ;
  //! Returns the active color map of the viewer. <br>
  Standard_EXPORT     Handle_Aspect_ColorMap ColorMap() const;
  //! Returns the active type map of the viewer. <br>
  Standard_EXPORT     Handle_Aspect_TypeMap TypeMap() const;
  //! Returns the active width map of the viewer. <br>
  Standard_EXPORT     Handle_Aspect_WidthMap WidthMap() const;
  //! Returns the active font map for the viewer. <br>
  Standard_EXPORT     Handle_Aspect_FontMap FontMap() const;
  //! Returns the active mark map of the viewer. <br>
  Standard_EXPORT     Handle_Aspect_MarkMap MarkMap() const;
  //! Returns True when the viewer uses MFT fonts <br>
//! instead of system fonts. <br>
  Standard_EXPORT     Standard_Boolean UseMFT() const;
  //! Returns the first view of the viewer. <br>
  Standard_EXPORT     Handle_Graphic2d_View View() const;
  //! Creates a color in the color map of the driver if <br>
//!          the color does not yes exist. <br>
//!          Returns the index of the color in the modified color map. <br>
  Standard_EXPORT     Standard_Integer InitializeColor(const Quantity_NameOfColor aColor) ;
  //! initializes an iteration on the active views. <br>
  Standard_EXPORT     void InitActiveViews() ;
  //! returns true if there are more active view(s) to return. <br>
  Standard_EXPORT     Standard_Boolean MoreActiveViews() const;
  //! Go to the next active view <br>
//!           (if there is not, ActiveView will raise an exception) <br>
  Standard_EXPORT     void NextActiveViews() ;
  
//! Returns the current view from the activated views. <br>
  Standard_EXPORT     Handle_V2d_View ActiveView() const;
  
//! Returns True when no more secondary views exist in the viewer. <br>
  Standard_EXPORT     Standard_Boolean IsEmpty() const;
  //! returns the current grid type. <br>
  Standard_EXPORT     Aspect_GridType GridType() const;
  //! returns the point (gx,gy) according to the grid. <br>
  Standard_EXPORT     void Hit(const Quantity_Length X,const Quantity_Length Y,Quantity_Length& gx,Quantity_Length& gy) const;
  
  Standard_EXPORT     void ActivateGrid(const Aspect_GridType aGridType,const Aspect_GridDrawMode aGridDrawMode) ;
  
  Standard_EXPORT     void DeactivateGrid() ;
  //! Returns True when a grid is active in the viewer. <br>
  Standard_EXPORT     Standard_Boolean IsActive() const;
  //! Returns the parameters of the current rectangular grid. <br>
  Standard_EXPORT     void RectangularGridValues(Quantity_Length& XOrigin,Quantity_Length& YOrigin,Quantity_Length& XStep,Quantity_Length& YStep,Quantity_PlaneAngle& RotationAngle) const;
  
//! Sets the rectangular grid: <br>
//! -   XOrigin, YOrigin define the point of origin of the grid, <br>
//! -   XStep defines the interval between two vertical lines, <br>
//! -   YStep defines the interval between two horizontal lines, <br>
//! -   RotationAngle defines the rotation angle of the grid. <br>
  Standard_EXPORT     void SetRectangularGridValues(const Quantity_Length XOrigin,const Quantity_Length YOrigin,const Quantity_Length XStep,const Quantity_Length YStep,const Quantity_PlaneAngle RotationAngle) ;
  //! Returns the parameters of the current circular grid. <br>
  Standard_EXPORT     void CircularGridValues(Quantity_Length& XOrigin,Quantity_Length& YOrigin,Quantity_Length& RadiusStep,Standard_Integer& DivisionNumber,Quantity_PlaneAngle& RotationAngle) const;
  
//! Sets the circular grid: <br>
//! -   XOrigin, YOrigin specify the origin of the grid, <br>
//! -   RadiusStep defines the interval between two circles, <br>
//! -   DivisionNumber determines the section number of half a circle, <br>
//! -   RotationAngle defines the rotation angle of the grid. <br>
  Standard_EXPORT     void SetCircularGridValues(const Quantity_Length XOrigin,const Quantity_Length YOrigin,const Quantity_Length RadiusStep,const Standard_Integer DivisionNumber,const Quantity_PlaneAngle RotationAngle) ;
  
  Standard_EXPORT     void SetGridColor(const Quantity_Color& color1,const Quantity_Color& color2) ;


friend class V2d_View;


  DEFINE_STANDARD_RTTI(V2d_Viewer)

protected:




private: 

  
  Standard_EXPORT     Handle_Aspect_Grid Grid() const;
  
  Standard_EXPORT     Standard_Integer HitPointMarkerIndex() const;
  
  Standard_EXPORT     Standard_Integer HitPointColor() const;
  
  Standard_EXPORT     Standard_Integer CoordinatesColor() const;
  
  Standard_EXPORT     void Init() ;

Handle_Aspect_ColorMap myColorMap;
Handle_Aspect_TypeMap myTypeMap;
Handle_Aspect_WidthMap myWidthMap;
Handle_Aspect_FontMap myFontMap;
Handle_Aspect_MarkMap myMarkMap;
Handle_Graphic2d_View myGraphicView;
TColStd_ListOfTransient myViews;
TColStd_ListIteratorOfListOfTransient myViewsIterator;
Handle_V2d_RectangularGrid myRGrid;
Handle_V2d_CircularGrid myCGrid;
Standard_Integer myHitPointMarkerIndex;
Standard_Integer myHitPointColorIndex;
Standard_Integer myCoordinatesColorIndex;
Aspect_GridType myGridType;
Standard_Boolean myUseMFT;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
