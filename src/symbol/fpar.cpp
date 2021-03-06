// ---------------------------------------------
//  fpar.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "fpar.h"

S_Fpar::S_Fpar(S_E* e)
    : S_F(), e(e)
{
}

S_Fpar::~S_Fpar()
{
	if(e != 0)
		delete e;
}

std::string S_Fpar::print() const
{
    return "(" + e->print() + ")";
}

void S_Fpar::optimize(bool& is_opt, double& value)
{
    S_E* ret = 0;
    e->optimize(is_opt, value, &ret);
    if (ret)
    {
        delete e;
        e = ret;
    }
}

double S_Fpar::eval(Interpreter& interpreter)
{
    return e->eval(interpreter);
}

double S_Fpar::eval()
{
    return e->eval();
}

void S_Fpar::staticAnalysis(std::map< std::string, Variable > & memId)
{
    this->e->staticAnalysis(memId);
}
