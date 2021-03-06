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
	if(bd != NULL)
		delete bd;
	if(d != NULL)
		delete d;
}

std::string S_Bditer::print() const
{
    return bd->print() + d->print() + ";\n";
}

void S_Bditer::staticAnalysis(std::map< std::string, Variable > & memId)
{
    this->bd->staticAnalysis(memId);
	this->d->staticAnalysis(memId);
}
