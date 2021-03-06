// File generated by Schema (Storable CallBack)
//
//                     Copyright (C) 1991 - 2000 by  
//                      Matra Datavision SA.  All rights reserved.
//  
//                     Copyright (C) 2001 - 2004 by
//                     Open CASCADE SA.  All rights reserved.
// 
// This file is part of the Open CASCADE Technology software.
//
// This software may be distributed and/or modified under the terms and
// conditions of the Open CASCADE Public License as defined by Open CASCADE SA
// and appearing in the file LICENSE included in the packaging of this file.
//  
// This software is distributed on an "AS IS" basis, without warranty of any
// kind, and Open CASCADE SA hereby disclaims all such warranties,
// including without limitation, any warranties of merchantability, fitness
// for a particular purpose or non-infringement. Please see the License for
// the specific terms and conditions governing rights and limitations under the
// License.

#ifndef _XCAFSchema_DBC_VArrayOfExtCharacter_HeaderFile
#define _XCAFSchema_DBC_VArrayOfExtCharacter_HeaderFile

#ifndef _Handle_Storage_Schema_HeaderFile
#include <Handle_Storage_Schema.hxx>
#endif
#ifndef _Storage_BaseDriver_HeaderFile
#include <Storage_BaseDriver.hxx>
#endif



class DBC_VArrayOfExtCharacter;

class XCAFSchema_DBC_VArrayOfExtCharacter {
public:
  Standard_EXPORT static void SAdd(const DBC_VArrayOfExtCharacter&,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SWrite(const DBC_VArrayOfExtCharacter&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
  Standard_EXPORT static void SRead(DBC_VArrayOfExtCharacter&,Storage_BaseDriver& aDriver,const Handle(Storage_Schema)& aSchema);
};
#endif
