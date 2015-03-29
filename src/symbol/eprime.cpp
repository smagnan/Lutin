// ---------------------------------------------
//  eprime.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "eprime.h"
#include "num.h"
#include "fnum.h"
#include "tf.h"
#include "et.h"

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

void S_Eprime::optimize()
{
    bool is_opt;
    double value;
    e->optimize(is_opt, value);
    if (is_opt)
    {
        delete e;
        e = new S_Et(new S_Tf(new S_Fnum(new S_Num(value))));
    }
}

double S_Eprime::eval(Interpreter& interpreter)
{
    return e->eval(interpreter);
}

double S_Eprime::eval()
{
    return e->eval();
}

void S_Eprime::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
    this->e->staticAnalysis(memId ,log);
}
