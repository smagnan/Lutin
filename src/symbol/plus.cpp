// ---------------------------------------------
//  plus.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "plus.h"

S_Plus::S_Plus(Symbols s)
    : Symbol(s)
{
}

S_Plus::S_Plus()
    : Symbol(PLUS)
{
}

S_Plus::~S_Plus()
{
}

std::string S_Plus::print()
{
    return "+";
}
