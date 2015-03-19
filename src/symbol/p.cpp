// ---------------------------------------------
//  p.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "p.h"

S_P::S_P(Symbols s)
    : Symbol(s)
{
}

S_P::S_P()
    : Symbol(P)
{
}

// Rule based constructor 
S_P::S_P(S_Bd * sbd, S_Bi * sbi) : Symbol(P), bd(sbd), bi(sbi)
{
}

// destructor
S_P::~S_P()
{
}
