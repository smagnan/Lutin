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

void S_Fnum::optimize(bool& is_opt, double& value)
{
    is_opt = true;
    value = num->getValue();
    std::cout << value << " | " << is_opt << " | S_Fnum " << *this << std::endl;
}

double S_Fnum::eval(Interpreter& interpreter)
{
    return num->eval(interpreter);
}

double S_Fnum::eval()
{
    return num->eval();
}
