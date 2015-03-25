// ---------------------------------------------
//  fpar.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "fpar.h"

S_Fpar::S_Fpar(S_E* e)
    : S_F(), e(e)
{
}

S_Fpar::~S_Fpar()
{
	if(e != 0)
		delete e;
}

std::string S_Fpar::print() const
{
    return "(" + e->print() + ")";
}
