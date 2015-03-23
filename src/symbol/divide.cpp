// ---------------------------------------------
//  divide.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "divide.h"

S_Divide::S_Divide()
    : Symbol(DIVIDE)
{
}

S_Divide::~S_Divide()
{
}

std::string S_Divide::print()
{
    return "/";
}
