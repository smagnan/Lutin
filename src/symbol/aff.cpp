// ---------------------------------------------
//  aff.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "aff.h"

S_Aff::S_Aff()
    : Symbol(AFF)
{
}

S_Aff::~S_Aff()
{
}

std::string S_Aff::print()
{
    return ":=";
}
