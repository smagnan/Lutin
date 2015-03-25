// ---------------------------------------------
//  fnum.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "fnum.h"

S_Fnum::S_Fnum(S_Num* num)
    : S_F(), num(num)
{
}

S_Fnum::~S_Fnum()
{
}

std::string S_Fnum::print() const
{
    return num->print();
}

Symbol* S_Fnum::optimize()
{
    return num;
}
