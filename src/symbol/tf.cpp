// ---------------------------------------------
//  tf.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "tf.h"

S_Tf::S_Tf(S_F * f)
    : S_T(), f(f)
{
}

S_Tf::~S_Tf()
{
	if(!f)
		delete f;
}

std::string S_Tf::print() const
{
    return f->print();
}

void S_Tf::optimize(bool& is_opt, double& value, S_T** ret)
{
    ret = 0;
    f->optimize(is_opt, value);
    std::cout << value << " | " << is_opt << " | S_Tf " << *this << std::endl;
}

double S_Tf::eval(Interpreter& interpreter)
{
    return f->eval(interpreter);
}

double S_Tf::eval()
{
    return f->eval();
}

void S_Tf::staticAnalysis(std::map< std::string, Variable > & memId ,std::vector<std::string> &log)
{
    this->f->staticAnalysis(memId ,log);
}
