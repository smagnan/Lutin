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
	if(bi != 0)
		delete bi;
	if(i != 0)
		delete i;
}

std::string S_Biiter::print() const
{
    return bi->print() + i->print() + ";\n";
}
