// ---------------------------------------------
//  eminus.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "eminus.h"

S_Eminus::S_Eminus(S_E* e, S_T* t)
    : S_Ebin(e, t)
{
}

S_Eminus::~S_Eminus()
{
}

std::string S_Eminus::print() const
{
    return e->print() + " - " + t->print();
}
