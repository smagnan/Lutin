// ---------------------------------------------
//  eq.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "eq.h"

S_Eq::S_Eq(Symbols s)
    : Symbol(s)
{
}

S_Eq::S_Eq()
    : Symbol(EQ)
{
}

S_Eq::~S_Eq()
{
}

std::string S_Eq::print()
{
    return "=";
}
