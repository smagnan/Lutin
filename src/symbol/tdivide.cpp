// ---------------------------------------------
//  tdivide.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "tdivide.h"

S_Tdivide::S_Tdivide(S_T* t, S_F* f)
    : S_Tbin(t, f)
{
}

S_Tdivide::~S_Tdivide()
{
}

std::string S_Tdivide::print() const
{
    return t->print() + " / " + f->print();
}

double S_Tdivide::eval(Interpreter& interpreter)
{
    double t_value = t->eval(interpreter);
    double f_value = f->eval(interpreter);
    
    if (f_value == 0)
    {
        throw MathException(DIVIDE_BY_ZERO_ERROR);
    }
    
    return t_value / f_value;
}
