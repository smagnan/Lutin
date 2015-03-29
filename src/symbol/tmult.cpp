// ---------------------------------------------
//  tmult.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "tmult.h"
#include "fnum.h"
#include "tf.h"

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

void S_Tmult::optimize(bool& is_opt, double& value)
{
    bool t_is_opt;
    double t_value;
    bool f_is_opt;
    double f_value;
    t->optimize(t_is_opt, t_value);
    f->optimize(f_is_opt, f_value);
    
    // Multiply by zero : optimize
    if (f_is_opt && f_value == 0)
    {
        is_opt = true;
        value = 0;
    }
    // Multiply by zero : optimize
    else if (t_is_opt && t_value == 0)
    {
        is_opt = true;
        value = 0;
    }
    // Both constants : optimize
    else if (t_is_opt && f_is_opt)
    {
        is_opt = true;
        value = t_value * f_value;
    }
    // Only t is optimized : fix t
    else if (t_is_opt)
    {
        is_opt = false;
        value = 0;
        delete t;
        t = new S_Tf(new S_Fnum(new S_Num(t_value)));
    }
    // Only f is optimized : fix f
    else if (f_is_opt)
    {
        is_opt = false;
        value = 0;
        delete f;
        f = new S_Fnum(new S_Num(f_value));
    }
    // None is optimized : do nothing
    else
    {
        is_opt = false;
        value = 0;
    }
    std::cout << value << " | " << is_opt << " | S_Tmult " << *this << std::endl;
}

double S_Tmult::eval(Interpreter& interpreter)
{
    double t_value = t->eval(interpreter);
    double f_value = f->eval(interpreter);
    
    return t_value * f_value;
}

double S_Tmult::eval()
{
    double t_value = t->eval();
    double f_value = f->eval();
    
    return t_value * f_value;
}

void S_Tmult::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
    this->t->staticAnalysis(memId ,log);
	this->f->staticAnalysis(memId ,log);
}
