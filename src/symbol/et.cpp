// ---------------------------------------------
//  et.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "et.h"

S_Et::S_Et(S_T* t)
    : S_E(), t(t)
{
}

S_Et::~S_Et()
{
}

std::string S_Et::print() const
{
    return t->print();
}
