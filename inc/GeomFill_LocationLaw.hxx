// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_LocationLaw_HeaderFile
#define _GeomFill_LocationLaw_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_GeomFill_LocationLaw_HeaderFile
#include <Handle_GeomFill_LocationLaw.hxx>
#endif

#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
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
#ifndef _GeomFill_PipeError_HeaderFile
#include <GeomFill_PipeError.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
class Standard_NotImplemented;
class Standard_OutOfRange;
class Adaptor3d_HCurve;
class gp_Mat;
class gp_Vec;
class TColgp_Array1OfPnt2d;
class TColgp_Array1OfVec2d;
class TColStd_Array1OfReal;
class gp_Pnt;


//! To define location  law in Sweeping location is -- <br>
//!          defined   by an  Matrix  M and  an Vector  V,  and <br>
//!          transform an point P in MP+V. <br>
class GeomFill_LocationLaw : public MMgt_TShared {

public:

  
  Standard_EXPORT   virtual  void SetCurve(const Handle(Adaptor3d_HCurve)& C)  = 0;
  
  Standard_EXPORT   virtual const Handle_Adaptor3d_HCurve& GetCurve() const = 0;
  //!  Set a transformation Matrix like   the law M(t) become <br>
//!          Mat * M(t) <br>
  Standard_EXPORT   virtual  void SetTrsf(const gp_Mat& Transfo)  = 0;
  
  Standard_EXPORT   virtual  Handle_GeomFill_LocationLaw Copy() const = 0;
  //! compute Location <br>
  Standard_EXPORT   virtual  Standard_Boolean D0(const Standard_Real Param,gp_Mat& M,gp_Vec& V)  = 0;
  //! compute Location and 2d points <br>
  Standard_EXPORT   virtual  Standard_Boolean D0(const Standard_Real Param,gp_Mat& M,gp_Vec& V,TColgp_Array1OfPnt2d& Poles2d)  = 0;
  //! compute location 2d  points and  associated <br>
//!          first derivatives. <br>
//!  Warning : It used only for C1 or C2 aproximation <br>
  Standard_EXPORT   virtual  Standard_Boolean D1(const Standard_Real Param,gp_Mat& M,gp_Vec& V,gp_Mat& DM,gp_Vec& DV,TColgp_Array1OfPnt2d& Poles2d,TColgp_Array1OfVec2d& DPoles2d) ;
  //! compute location 2d  points and associated <br>
//!          first and seconde  derivatives. <br>
//!  Warning : It used only for C2 aproximation <br>
  Standard_EXPORT   virtual  Standard_Boolean D2(const Standard_Real Param,gp_Mat& M,gp_Vec& V,gp_Mat& DM,gp_Vec& DV,gp_Mat& D2M,gp_Vec& D2V,TColgp_Array1OfPnt2d& Poles2d,TColgp_Array1OfVec2d& DPoles2d,TColgp_Array1OfVec2d& D2Poles2d) ;
  //!   get the number of  2d  curves (Restrictions  +  Traces) <br>
//!            to approximate. <br>
  Standard_EXPORT     Standard_Integer Nb2dCurves() const;
  //! Say if the first restriction is defined in this class. <br>
//!           If it  is true the  first element  of poles array   in <br>
//!          D0,D1,D2... Correspond to this restriction. <br>
//!  Returns Standard_False (default implementation) <br>
  Standard_EXPORT   virtual  Standard_Boolean HasFirstRestriction() const;
  //! Say if the last restriction is defined in this class. <br>
//!           If it is  true the  last element  of poles array in <br>
//!          D0,D1,D2... Correspond to this restriction. <br>
//!          Returns Standard_False (default implementation) <br>
  Standard_EXPORT   virtual  Standard_Boolean HasLastRestriction() const;
  //! Give the number of trace (Curves 2d wich are not restriction) <br>
//!          Returns 0 (default implementation) <br>
  Standard_EXPORT   virtual  Standard_Integer TraceNumber() const;
  //!Give a status to the Law <br>
//!          Returns PipeOk (default implementation) <br>
  Standard_EXPORT   virtual  GeomFill_PipeError ErrorStatus() const;
  //! Returns  the number  of  intervals for  continuity <br>
//!          <S>. <br>
//!          May be one if Continuity(me) >= <S> <br>
  Standard_EXPORT   virtual  Standard_Integer NbIntervals(const GeomAbs_Shape S) const = 0;
  //! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
  Standard_EXPORT   virtual  void Intervals(TColStd_Array1OfReal& T,const GeomAbs_Shape S) const = 0;
  //! Sets the bounds of the parametric interval on <br>
//!          the function <br>
//!          This determines the derivatives in these values if the <br>
//!          function is not Cn. <br>
  Standard_EXPORT   virtual  void SetInterval(const Standard_Real First,const Standard_Real Last)  = 0;
  //! Gets the bounds of the parametric interval on <br>
//!          the function <br>
  Standard_EXPORT   virtual  void GetInterval(Standard_Real& First,Standard_Real& Last) const = 0;
  //! Gets the bounds of the function parametric domain. <br>
//!  Warning: This domain it is  not modified by the <br>
//!          SetValue method <br>
  Standard_EXPORT   virtual  void GetDomain(Standard_Real& First,Standard_Real& Last) const = 0;
  //! Returns the resolutions in the  sub-space 2d <Index> <br>
//!          This information is usfull to find an good tolerance in <br>
//!          2d approximation. <br>
  Standard_EXPORT   virtual  void Resolution(const Standard_Integer Index,const Standard_Real Tol,Standard_Real& TolU,Standard_Real& TolV) const;
  //! Is usefull, if (me) have to run numerical <br>
//!          algorithm to perform D0, D1 or D2 <br>
//! The default implementation make nothing. <br>
  Standard_EXPORT   virtual  void SetTolerance(const Standard_Real Tol3d,const Standard_Real Tol2d) ;
  //!  Get the maximum Norm  of the matrix-location part.  It <br>
//!           is usful to find an good Tolerance to approx M(t). <br>
  Standard_EXPORT   virtual  Standard_Real GetMaximalNorm()  = 0;
  //! Get average value of M(t) and V(t) it is usfull to <br>
//!          make fast approximation of rational surfaces. <br>
  Standard_EXPORT   virtual  void GetAverageLaw(gp_Mat& AM,gp_Vec& AV)  = 0;
  //! Say if the Location  Law, is an translation of  Location <br>
//! The default implementation is " returns False ". <br>
  Standard_EXPORT   virtual  Standard_Boolean IsTranslation(Standard_Real& Error) const;
  //! Say if the Location  Law, is a rotation of Location <br>
//! The default implementation is " returns False ". <br>
  Standard_EXPORT   virtual  Standard_Boolean IsRotation(Standard_Real& Error) const;
  
  Standard_EXPORT   virtual  void Rotation(gp_Pnt& Center) const;




  DEFINE_STANDARD_RTTI(GeomFill_LocationLaw)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
