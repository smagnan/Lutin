// ---------------------------------------------
//  bditer.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "bditer.h"

S_Bditer::S_Bditer(S_Bd* bd, S_D* d)
    : S_Bd(), bd(bd), d(d)
{
}

S_Bditer::~S_Bditer()
{
}

std::string S_Bditer::print() const
{
    return bd->print() + d->print() + ";\n";
}
