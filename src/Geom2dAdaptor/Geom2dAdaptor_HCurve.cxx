// Created on: 1995-08-25
// Created by: Remi LEQUETTE
// Copyright (c) 1995-1999 Matra Datavision
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



#include <Geom2dAdaptor_HCurve.ixx>

//=======================================================================
//function : Geom2dAdaptor_HCurve
//purpose  : 
//=======================================================================

Geom2dAdaptor_HCurve::Geom2dAdaptor_HCurve()
{
}

//=======================================================================
//function : Geom2dAdaptor_HCurve
//purpose  : 
//=======================================================================

Geom2dAdaptor_HCurve::Geom2dAdaptor_HCurve(const Geom2dAdaptor_Curve& AS) :
Geom2dAdaptor_GHCurve(AS)
{
}

//=======================================================================
//function : Geom2dAdaptor_HCurve
//purpose  : 
//=======================================================================

Geom2dAdaptor_HCurve::Geom2dAdaptor_HCurve(const Handle(Geom2d_Curve)& S)
{
  ChangeCurve2d().Load(S);
}

//=======================================================================
//function : Geom2dAdaptor_HCurve
//purpose  : 
//=======================================================================

Geom2dAdaptor_HCurve::Geom2dAdaptor_HCurve(const Handle(Geom2d_Curve)& S, 
						  const Standard_Real UFirst, 
						  const Standard_Real ULast)
{
  ChangeCurve2d().Load(S,UFirst,ULast);
}

