// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs2d_AspectFramedText_HeaderFile
#define _Prs2d_AspectFramedText_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Prs2d_AspectFramedText_HeaderFile
#include <Handle_Prs2d_AspectFramedText.hxx>
#endif

#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
#ifndef _Aspect_TypeOfFont_HeaderFile
#include <Aspect_TypeOfFont.hxx>
#endif
#ifndef _Aspect_WidthOfLine_HeaderFile
#include <Aspect_WidthOfLine.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Prs2d_AspectRoot_HeaderFile
#include <Prs2d_AspectRoot.hxx>
#endif


//! defines the attributes when drawing a framed text Presentation. <br>
class Prs2d_AspectFramedText : public Prs2d_AspectRoot {

public:

  
  Standard_EXPORT   Prs2d_AspectFramedText(const Quantity_NameOfColor ColorInd,const Quantity_NameOfColor FrameColorInd,const Aspect_WidthOfLine FrameWidthInd,const Aspect_TypeOfFont FontInd,const Standard_ShortReal aSlant,const Standard_ShortReal aHScale,const Standard_ShortReal aWScale,const Standard_Boolean isUnderlined);
  
  Standard_EXPORT     void SetColorOfText(const Quantity_NameOfColor aColor) ;
  
  Standard_EXPORT     void SetFrameColor(const Quantity_NameOfColor aFrameColor) ;
  
  Standard_EXPORT     void SetFrameWidth(const Aspect_WidthOfLine aFrameWidth) ;
  
  Standard_EXPORT     void SetFontOfText(const Aspect_TypeOfFont aFont) ;
  
  Standard_EXPORT     void SetSlant(const Standard_ShortReal aSlant) ;
  
  Standard_EXPORT     void SetHScale(const Standard_ShortReal aHScale) ;
  
  Standard_EXPORT     void SetWScale(const Standard_ShortReal aWScale) ;
  
  Standard_EXPORT     void SetUnderlined(const Standard_Boolean anIsUnderlined) ;
  
  Standard_EXPORT     void Values(Quantity_NameOfColor& aColorInd,Quantity_NameOfColor& aFrameColorInd,Aspect_WidthOfLine& aFrameWidthInd,Aspect_TypeOfFont& aFontInd,Standard_ShortReal& aSlant,Standard_ShortReal& aHScale,Standard_ShortReal& aWScale,Standard_Boolean& isUnderlined) const;




  DEFINE_STANDARD_RTTI(Prs2d_AspectFramedText)

protected:




private: 


Quantity_NameOfColor myColor;
Quantity_NameOfColor myFrameColor;
Aspect_TypeOfFont myFont;
Aspect_WidthOfLine myFrameWidth;
Standard_ShortReal mySlant;
Standard_ShortReal myHScale;
Standard_ShortReal myWScale;
Standard_Boolean myIsUnderlined;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
