// ---------------------------------------------
//  tmult.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "tmult.h"

S_Tmult::S_Tmult(S_T* t, S_F* f)
    : S_Tbin(t, f)
{
}

S_Tmult::~S_Tmult()
{
}

std::string S_Tmult::print() const
{
    return t->print() + " * " + f->print();
}

double S_Tmult::eval(Interpreter& interpreter)
{
    double t_value = t->eval(interpreter);
    double f_value = f->eval(interpreter);
    
    return t_value * f_value;
}
