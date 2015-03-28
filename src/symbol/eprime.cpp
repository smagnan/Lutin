// ---------------------------------------------
//  eprime.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "eprime.h"

S_Eprime::S_Eprime(S_E* e)
    : Symbol(EPRIME), e(e)
{
}

S_Eprime::~S_Eprime()
{
	if(e != 0)
		delete e;
}

std::string S_Eprime::print() const
{
    return e->print();
}

double S_Eprime::eval(Interpreter& interpreter)
{
    return e->eval(interpreter);
}

void S_Eprime::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
    this->e->staticAnalysis(memId ,log);
}
