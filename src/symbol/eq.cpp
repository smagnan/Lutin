// ---------------------------------------------
//  eq.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "eq.h"

S_Eq::S_Eq()
    : Symbol(EQ)
{
}

S_Eq::~S_Eq()
{
}

std::string S_Eq::print() const
{
    return "=";
}
