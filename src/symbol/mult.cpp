// ---------------------------------------------
//  mult.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "mult.h"

S_Mult::S_Mult()
    : Symbol(MULT)
{
}

S_Mult::~S_Mult()
{
}

std::string S_Mult::print() const
{
    return "*";
}
