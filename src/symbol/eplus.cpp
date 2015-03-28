// ---------------------------------------------
//  eplus.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "eplus.h"

S_Eplus::S_Eplus(S_E* e, S_T* t)
    : S_Ebin(e, t)
{
}

S_Eplus::~S_Eplus()
{
}

std::string S_Eplus::print() const
{
    return e->print() + " + " + t->print();
}

double S_Eplus::eval(Interpreter& interpreter)
{
    double e_value = e->eval(interpreter);
    double t_value = t->eval(interpreter);
    
    return e_value + t_value;
}

void S_Eplus::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
    this->e->staticAnalysis(memId , log);
	this->t->staticAnalysis(memId , log);
}