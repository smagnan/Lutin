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
S_P::S_P(S_Bd s_bd, S_Bi s_bi) : Symbol(P), sbd(s_bd), sbi( s_bi )
{ 
}

// destructor
S_P::~S_P()
{
}
