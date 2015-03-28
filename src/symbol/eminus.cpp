// ---------------------------------------------
//  eminus.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "eminus.h"

S_Eminus::S_Eminus(S_E* e, S_T* t)
    : S_Ebin(e, t)
{
}

S_Eminus::~S_Eminus()
{
}

std::string S_Eminus::print() const
{
    return e->print() + " - " + t->print();
}

double S_Eminus::eval(Interpreter& interpreter)
{
    double e_value = e->eval(interpreter);
    double t_value = t->eval(interpreter);
    
    return e_value - t_value;
}

void S_Eminus::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
    this->e->staticAnalysis(memId ,log);
	this->t->staticAnalysis(memId ,log);
}
