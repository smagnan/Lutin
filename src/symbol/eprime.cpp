// ---------------------------------------------
//  eprime.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "eprime.h"

S_Eprime::S_Eprime(S_E* e)
    : Symbol(EPRIME), e(e)
{
}

S_Eprime::~S_Eprime()
{
}

std::string S_Eprime::print() const
{
    return e->print();
}
