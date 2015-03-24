// ---------------------------------------------
//  iniliter.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "iniliter.h"

S_Iniliter::S_Iniliter(S_Inil* inil, S_Ini* ini)
    : S_Inil(), inil(inil), ini(ini)
{
}

S_Iniliter::~S_Iniliter()
{
}

std::string S_Iniliter::print()
{
    return inil->print() + ", " + ini->print();
}
