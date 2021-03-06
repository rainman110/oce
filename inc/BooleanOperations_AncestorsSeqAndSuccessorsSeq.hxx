// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BooleanOperations_AncestorsSeqAndSuccessorsSeq_HeaderFile
#define _BooleanOperations_AncestorsSeqAndSuccessorsSeq_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TColStd_SequenceOfInteger_HeaderFile
#include <TColStd_SequenceOfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif


//! provide all the ancestors and  successors of a -- <br>
//!          given shape.  Exemple : for  an edge the ancestors <br>
//!           -- are the wires  that hold it and the successors <br>
//!          are -- its vertices.  As  we don't know the number <br>
//!          of -- ancestors of a given shape we first put them <br>
//!           in a -- sequence  of integers (our data structure <br>
//!          -- defining      the shapes does not   have   back <br>
//!          pointers). Then  we   transfer these data  in  the <br>
//!          class AncestorsAndSuccessors. <br>
class BooleanOperations_AncestorsSeqAndSuccessorsSeq  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BooleanOperations_AncestorsSeqAndSuccessorsSeq();
  //! to display the fields. <br>
  Standard_EXPORT     void Dump() const;
  
        Standard_Integer GetAncestor(const Standard_Integer AncestorIndex) const;
  
        Standard_Integer GetSuccessor(const Standard_Integer SuccessorIndex) const;
  
        TopAbs_Orientation GetOrientation(const Standard_Integer OrientationIndex) const;
  
        Standard_Integer NumberOfAncestors() const;
  
        Standard_Integer NumberOfSuccessors() const;
  //! appends AncestorNumber in the sequence. <br>
        void SetNewAncestor(const Standard_Integer AncestorNumber) ;
  //! appends SuccessorNumber in the array refering to <mySuccessorsInserted>. <br>
        void SetNewSuccessor(const Standard_Integer SuccessorNumber) ;
  //! appends SuccessorNumber in the array refering to <mySuccessorsInserted>. <br>
        void SetNewOrientation(const TopAbs_Orientation theOrientation) ;





protected:





private:



TColStd_SequenceOfInteger myAncestors;
TColStd_SequenceOfInteger mySuccessors;
TColStd_SequenceOfInteger myOrientations;


};


#include <BooleanOperations_AncestorsSeqAndSuccessorsSeq.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
