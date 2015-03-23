// ---------------------------------------------
//  minus.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "minus.h"

S_Minus::S_Minus(Symbols s)
    : Symbol(s)
{
}

S_Minus::S_Minus()
    : Symbol(MINUS)
{
}

S_Minus::~S_Minus()
{
}

std::string S_Minus::print()
{
    return "-";
}
