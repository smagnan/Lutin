// ---------------------------------------------
//  biiter.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "biiter.h"

S_Biiter::S_Biiter(S_Bi* bi, S_I* i)
    : S_Bi(), bi(bi), i(i)
{
}

S_Biiter::~S_Biiter()
{
}

std::string S_Biiter::print()
{
    return bi->print() + i->print() + ";\n";
}
