// Created on: 2001-06-08
// Created by: Peter KURNEV
// Copyright (c) 2001-2012 OPEN CASCADE SAS
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



#include <BOPTColStd_ShapeWithRankHasher.ixx>
//=======================================================================
//function : BOPTColStd_ShapeWithRankHasher::HashCode
//purpose  : 
//=======================================================================
Standard_Integer BOPTColStd_ShapeWithRankHasher::HashCode (const BOPTColStd_ShapeWithRank& aSR,
							     const Standard_Integer Upper)
{
  return aSR.HashCode(Upper);
}

//=======================================================================
//function : BOPTColStd_ShapeWithRankHasher::IsEqual
//purpose  : 
//=======================================================================
  Standard_Boolean BOPTColStd_ShapeWithRankHasher::IsEqual (const BOPTColStd_ShapeWithRank& aSR1,
							    const BOPTColStd_ShapeWithRank& aSR2)
{
  return aSR1.IsEqual(aSR2);
}

