// ---------------------------------------------
//  et.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "et.h"

S_Et::S_Et(S_T* t)
    : S_E(), t(t)
{
}

S_Et::~S_Et()
{
	if(t != 0)
		delete t;
}

std::string S_Et::print() const
{
    return t->print();
}

void S_Et::optimize(bool& is_opt, double& value, S_E** ret)
{
    ret = 0;
    S_T* t_ret = 0;
    t->optimize(is_opt, value, &t_ret);
    if (t_ret)
    {
        delete t;
        t = t_ret;
    }
}

double S_Et::eval(Interpreter& interpreter)
{
    return t->eval(interpreter);
}

double S_Et::eval()
{
    return t->eval();
}

void S_Et::staticAnalysis(std::map< std::string, Variable > & memId ,std::vector<std::string> &log)
{
    this->t->staticAnalysis(memId , log);
}
