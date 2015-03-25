// ---------------------------------------------
//  e.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "e.h"

S_E::S_E(Symbols s)
    : Symbol(s)
{
    
}

S_E::S_E()
    : Symbol(E)
{
}

S_E::~S_E()
{
}

std::string S_E::print() const
{
    return "";
}
