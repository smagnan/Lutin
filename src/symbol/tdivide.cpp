// ---------------------------------------------
//  tdivide.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "tdivide.h"

S_Tdivide::S_Tdivide(S_T* t, S_F* f)
    : S_Tbin(t, f)
{
}

S_Tdivide::~S_Tdivide()
{
}

std::string S_Tdivide::print()
{
    return t->print() + " / " + f->print();
}
