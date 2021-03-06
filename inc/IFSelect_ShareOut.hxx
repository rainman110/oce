// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_ShareOut_HeaderFile
#define _IFSelect_ShareOut_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_ShareOut_HeaderFile
#include <Handle_IFSelect_ShareOut.hxx>
#endif

#ifndef _IFSelect_TSeqOfDispatch_HeaderFile
#include <IFSelect_TSeqOfDispatch.hxx>
#endif
#ifndef _IFSelect_SequenceOfGeneralModifier_HeaderFile
#include <IFSelect_SequenceOfGeneralModifier.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_IFSelect_Dispatch_HeaderFile
#include <Handle_IFSelect_Dispatch.hxx>
#endif
#ifndef _Handle_IFSelect_GeneralModifier_HeaderFile
#include <Handle_IFSelect_GeneralModifier.hxx>
#endif
#ifndef _Handle_IFSelect_Modifier_HeaderFile
#include <Handle_IFSelect_Modifier.hxx>
#endif
class TCollection_HAsciiString;
class Interface_InterfaceError;
class Standard_OutOfRange;
class Standard_Transient;
class IFSelect_Dispatch;
class IFSelect_GeneralModifier;
class IFSelect_Modifier;
class TCollection_AsciiString;


//! This class gathers the informations required to produce one or <br>
//!           several file(s) from the content of an InterfaceModel (passing <br>
//!           through the creation of intermediate Models). <br>
//! <br>
//!           It can correspond to a complete Divide up of a set of Entities <br>
//!           intended to be exhaustive and to limit duplications. Or to a <br>
//!           simple Extraction of some Entities, in order to work on them. <br>
//! <br>
//!           A ShareOut is composed of a list of Dispatches. <br>
//!           To Each Dispatch in the ShareOut, is bound an Id. Number <br>
//!           This Id. Number allows to identify a Display inside the <br>
//!           ShareOut in a stable way (for instance, to attach file names) <br>
//! <br>
//!           ShareOut can be seen as a "passive" description, activated <br>
//!           through a ShareOutResult, which gives the InterfaceModel on <br>
//!           which to work, as a unique source. Thus it is easy to change <br>
//!           it without coherence problems <br>
//! <br>
//!           Services about it are provided by the class ShareOutResult <br>
//!           which is a service class : simulation (list of files and of <br>
//!           entities per file; "forgotten" entities; duplicated entities), <br>
//!           exploitation (generation of derivated Models, each of them <br>
//!           generating an output file) <br>
class IFSelect_ShareOut : public MMgt_TShared {

public:

  //! Creates an empty ShareOut <br>
  Standard_EXPORT   IFSelect_ShareOut();
  //! Removes in one operation all the Dispatches with their Idents <br>
//!           Also clears all informations about Names, and all Results but <br>
//!           naming informations which are : <br>
//!           - kept if <onlydisp> is True. <br>
//!           - cleared if <onlydisp> is False (complete clearing) <br>
//!           If <onlydisp> is True, that's all. Else, clears also Modifiers <br>
  Standard_EXPORT     void Clear(const Standard_Boolean onlydisp) ;
  //! Clears all data produced (apart from Dispatches, etc...) <br>
//!           if <alsoname> is True, all is cleared. Else, informations <br>
//!           about produced Names are kept (to maintain unicity of naming <br>
//!           across clearings) <br>
  Standard_EXPORT     void ClearResult(const Standard_Boolean alsoname) ;
  //! Removes an item, which can be, either a Dispatch (removed from <br>
//!           the list of Dispatches), or a GeneralModifier (removed from <br>
//!           the list of Model Modifiers or from the list of File Modifiers <br>
//!           according to its type). <br>
//!           Returns True if done, False if has not been found or if it is <br>
//!           neither a Dispatch, nor a Modifier. <br>
  Standard_EXPORT     Standard_Boolean RemoveItem(const Handle(Standard_Transient)& item) ;
  //! Returns the rank of last run item (ClearResult resets it to 0) <br>
  Standard_EXPORT     Standard_Integer LastRun() const;
  //! Records a new alue for the rank of last run item <br>
  Standard_EXPORT     void SetLastRun(const Standard_Integer last) ;
  //! Returns the count of Dispatches <br>
  Standard_EXPORT     Standard_Integer NbDispatches() const;
  //! Returns the Rank of a Dispatch, given its Value (Handle). <br>
//!           Returns 0 if the Dispatch is unknown in the ShareOut <br>
  Standard_EXPORT     Standard_Integer DispatchRank(const Handle(IFSelect_Dispatch)& disp) const;
  //! Returns a Dispatch, given its rank in the list <br>
  Standard_EXPORT    const Handle_IFSelect_Dispatch& Dispatch(const Standard_Integer num) const;
  //! Adds a Dispatch to the list <br>
  Standard_EXPORT     void AddDispatch(const Handle(IFSelect_Dispatch)& disp) ;
  //! Removes a Dispatch, given its rank in the list <br>
//!           Returns True if done, False if rank is not between <br>
//!           (LastRun + 1) and (NbDispatches) <br>
  Standard_EXPORT     Standard_Boolean RemoveDispatch(const Standard_Integer rank) ;
  //! Sets a Modifier to be applied on all Dispatches to be run <br>
//!           If <modifier> is a ModelModifier, adds it to the list of <br>
//!           Model Modifiers; else to the list of File Modifiers <br>
//!           By default (atnum = 0) at the end of the list, else at <atnum> <br>
//!           Each Modifier is used, after each copy of a packet of Entities <br>
//!           into a Model : its criteria are checked and if they are OK, <br>
//!           the method Perform of this Modifier is run. <br>
  Standard_EXPORT     void AddModifier(const Handle(IFSelect_GeneralModifier)& modifier,const Standard_Integer atnum) ;
  //! Sets a Modifier to be applied on the Dispatch <dispnum> <br>
//!           If <modifier> is a ModelModifier, adds it to the list of <br>
//!           Model Modifiers; else to the list of File Modifiers <br>
//!           This is the same list as for all Dispatches, but the <br>
//!           Modifier is qualified to be applied to one Dispatch only <br>
//!           Then, <atnum> refers to the entire list <br>
//!           By default (atnum = 0) at the end of the list, else at <atnum> <br>
//!           Remark : if the Modifier was already in the list and if <br>
//!             <atnum> = 0, the Modifier is not moved, but only qualified <br>
//!             for a Dispatch <br>
  Standard_EXPORT     void AddModifier(const Handle(IFSelect_GeneralModifier)& modifier,const Standard_Integer dispnum,const Standard_Integer atnum) ;
  //! Adds a Modifier to the list of Modifiers : Model Modifiers if <br>
//!           <formodel> is True, File Modifiers else (internal). <br>
  Standard_EXPORT     void AddModif(const Handle(IFSelect_GeneralModifier)& modifier,const Standard_Boolean formodel,const Standard_Integer atnum = 0) ;
  //! Returns count of Modifiers (which apply to complete Models) : <br>
//!           Model Modifiers if <formodel> is True, File Modifiers else <br>
  Standard_EXPORT     Standard_Integer NbModifiers(const Standard_Boolean formodel) const;
  //! Returns a Modifier of the list, given its rank : <br>
//!           Model Modifiers if <formodel> is True, File Modifiers else <br>
  Standard_EXPORT     Handle_IFSelect_GeneralModifier GeneralModifier(const Standard_Boolean formodel,const Standard_Integer num) const;
  //! Returns a Modifier of the list of Model Modifiers, duely casted <br>
  Standard_EXPORT     Handle_IFSelect_Modifier ModelModifier(const Standard_Integer num) const;
  //! Gives the rank of a Modifier in the list, 0 if not in the list <br>
//!           Model Modifiers if <modifier> is kind of ModelModifer, <br>
//!           File Modifiers else <br>
  Standard_EXPORT     Standard_Integer ModifierRank(const Handle(IFSelect_GeneralModifier)& modifier) const;
  //! Removes a Modifier, given it rank in the list : <br>
//!           Model Modifiers if <formodel> is True, File Modifiers else <br>
//!           Returns True if done, False if <num> is out of range <br>
  Standard_EXPORT     Standard_Boolean RemoveModifier(const Standard_Boolean formodel,const Standard_Integer num) ;
  //! Changes the rank of a modifier in the list : <br>
//!           Model Modifiers if <formodel> is True, File Modifiers else <br>
//!           from <before> to <after> <br>
//!           Returns True if done, False else (before or after out of range) <br>
  Standard_EXPORT     Standard_Boolean ChangeModifierRank(const Standard_Boolean formodel,const Standard_Integer befor,const Standard_Integer after) ;
  //! Attaches a Root Name to a Dispatch given its rank, as an <br>
//!           HAsciiString (standard form). A Null Handle resets this name. <br>
//!           Returns True if OK, False if this Name is already attached, <br>
//!           for a Dispatch or for Default, or <num> out of range <br>
  Standard_EXPORT     Standard_Boolean SetRootName(const Standard_Integer num,const Handle(TCollection_HAsciiString)& name) ;
  //! Returns True if the Dispatch of rank <num> has an attached <br>
//!           Root Name. False else, or if num is out of range <br>
  Standard_EXPORT     Standard_Boolean HasRootName(const Standard_Integer num) const;
  //! Returns the Root bound to a Dispatch, given its rank <br>
//!           Returns a Null Handle if not defined <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString RootName(const Standard_Integer num) const;
  //! Returns an integer value about a given root name : <br>
//!           - positive : it's the rank of the Dispatch which has this name <br>
//!           - null : this root name is unknown <br>
//!           - negative (-1) : this root name is the default root name <br>
  Standard_EXPORT     Standard_Integer RootNumber(const Handle(TCollection_HAsciiString)& name) const;
  //! Defines or Changes the general Prefix (which is prepended to <br>
//!           complete file name generated). If this method is not call, <br>
//!           Prefix remains empty <br>
  Standard_EXPORT     void SetPrefix(const Handle(TCollection_HAsciiString)& pref) ;
  //! Defines or Changes the Default Root Name to a new value (which <br>
//!           is used for dispatches which have no attached root name). <br>
//!           If this method is not called, DefaultRootName remains empty <br>
//!           Returns True if OK, False if this Name is already attached, <br>
//!           for a Dispatch or for Default <br>
  Standard_EXPORT     Standard_Boolean SetDefaultRootName(const Handle(TCollection_HAsciiString)& defrt) ;
  //! Defines or Changes the general Extension (which is appended to <br>
//!           complete file name generated). If this method is not call, <br>
//!           Extension remains empty <br>
  Standard_EXPORT     void SetExtension(const Handle(TCollection_HAsciiString)& ext) ;
  //! Returns the general Prefix. Can be empty. <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Prefix() const;
  //! Returns the Default Root Name. Can be empty. <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString DefaultRootName() const;
  //! Returns the general Extension. Can be empty (not recommanded) <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Extension() const;
  //! Computes the complete file name for a Packet of a Dispatch, <br>
//!           given Dispatch Number (Rank), Packet Number, and Count of <br>
//!           Packets generated by this Dispatch (0 if unknown) <br>
//! <br>
//!           File Name is made of following strings, concatenated : <br>
//!           General Prefix, Root Name for Dispatch, Packet Suffix, and <br>
//!           General Extension. If no Root Name is specified for a <br>
//!           Dispatch, DefaultRootName is considered (and pnum is not used, <br>
//!           but <thenbdefs> is incremented and used <br>
//!           Error if no Root is defined for this <idnum> <br>
  Standard_EXPORT     TCollection_AsciiString FileName(const Standard_Integer dnum,const Standard_Integer pnum,const Standard_Integer nbpack = 0) ;




  DEFINE_STANDARD_RTTI(IFSelect_ShareOut)

protected:




private: 


IFSelect_TSeqOfDispatch thedisps;
IFSelect_SequenceOfGeneralModifier themodelmodifiers;
IFSelect_SequenceOfGeneralModifier thefilemodifiers;
Handle_TCollection_HAsciiString thepref;
Handle_TCollection_HAsciiString thedefrt;
Handle_TCollection_HAsciiString theext;
Standard_Integer thenbdefs;
Standard_Integer thelastrun;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
