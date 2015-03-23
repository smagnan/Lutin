// ---------------------------------------------
//  eplus.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "eplus.h"

S_Eplus::S_Eplus(S_E* e, S_T* t)
    : S_Ebin(e, t)
{
}

S_Eplus::~S_Eplus()
{
}

std::string S_Eplus::print()
{
    return e->print() + " + " + t->print();
}
