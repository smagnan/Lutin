// ---------------------------------------------
//  eprime.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "eprime.h"

S_Eprime::S_Eprime(Symbols s)
    : Symbol(s)
{
}

S_Eprime::S_Eprime()
    : Symbol(EPRIME)
{
}

// RB
S_Eprime::S_Eprime(S_E* se)
    : Symbol(EPRIME), e(se)
{
}

S_Eprime::~S_Eprime()
{
}
