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
	if(num != 0)
		delete num;
}

std::string S_Fnum::print() const
{
    return num->print();
}

Symbol* S_Fnum::optimize()
{
    return num;
}

double S_Fnum::eval(Interpreter& interpreter)
{
    return num->eval(interpreter);
}
