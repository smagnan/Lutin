// ---------------------------------------------
//  p.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "p.h"

S_P::S_P(S_Bd* bd,S_Bi* bi)
    : Symbol(P), bd(bd), bi(bi)
{
}

S_P::~S_P()
{
	if(!bd)
		delete bd;
	if(!bi)
		delete bi;
}

std::string S_P::print() const
{
    return bd->print() + "\n" + bi->print();
}
