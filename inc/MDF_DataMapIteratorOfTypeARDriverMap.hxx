// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_DataMapIteratorOfTypeARDriverMap_HeaderFile
#define _MDF_DataMapIteratorOfTypeARDriverMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Handle_MDF_ARDriver_HeaderFile
#include <Handle_MDF_ARDriver.hxx>
#endif
#ifndef _Handle_MDF_DataMapNodeOfTypeARDriverMap_HeaderFile
#include <Handle_MDF_DataMapNodeOfTypeARDriverMap.hxx>
#endif
class Standard_NoSuchObject;
class Standard_Type;
class MDF_ARDriver;
class TColStd_MapTransientHasher;
class MDF_TypeARDriverMap;
class MDF_DataMapNodeOfTypeARDriverMap;



class MDF_DataMapIteratorOfTypeARDriverMap  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   MDF_DataMapIteratorOfTypeARDriverMap();
  
  Standard_EXPORT   MDF_DataMapIteratorOfTypeARDriverMap(const MDF_TypeARDriverMap& aMap);
  
  Standard_EXPORT     void Initialize(const MDF_TypeARDriverMap& aMap) ;
  
  Standard_EXPORT    const Handle_Standard_Type& Key() const;
  
  Standard_EXPORT    const Handle_MDF_ARDriver& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
