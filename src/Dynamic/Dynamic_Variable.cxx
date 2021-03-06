// Created on: 1994-08-24
// Created by: Gilles DEBARBOUILLE
// Copyright (c) 1994-1999 Matra Datavision
// Copyright (c) 1999-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.



#include <Dynamic_Variable.ixx>

//=======================================================================
//function : Dynamic_Variable
//purpose  : 
//=======================================================================

Dynamic_Variable::Dynamic_Variable()
{
}

//=======================================================================
//function : Parameter
//purpose  : 
//=======================================================================

void Dynamic_Variable::Parameter(const Handle(Dynamic_Parameter)& aparameter)
{
  theparameter = aparameter;
}

//=======================================================================
//function : Parameter
//purpose  : 
//=======================================================================

Handle(Dynamic_Parameter) Dynamic_Variable::Parameter() const
{
  return theparameter;
}

//=======================================================================
//function : Mode
//purpose  : 
//=======================================================================

void Dynamic_Variable::Mode(const Dynamic_ModeEnum amode)
{
  themode = amode;
}

//=======================================================================
//function : Mode
//purpose  : 
//=======================================================================

Dynamic_ModeEnum Dynamic_Variable::Mode() const
{
  return themode;
}

//=======================================================================
//function : Dump
//purpose  : 
//=======================================================================

void Dynamic_Variable::Dump(Standard_OStream& astream) const
{
  theparameter->Dump(astream);
}
