// ---------------------------------------------
//  eplus.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "eplus.h"
#include "fnum.h"
#include "tf.h"
#include "et.h"

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

void S_Eplus::optimize(bool& is_opt, double& value, S_E** ret)
{
    bool e_is_opt;
    double e_value;
    S_E* e_ret = 0;
    bool t_is_opt;
    double t_value;
    S_T* t_ret = 0;
    e->optimize(e_is_opt, e_value, &e_ret);
    t->optimize(t_is_opt, t_value, &t_ret);
    
    if (e_ret)
    {
        delete e;
        e = e_ret;
    }
    
    if (t_ret)
    {
        delete t;
        t = t_ret;
    }
    
    // Both constants : optimize
    if (e_is_opt && t_is_opt)
    {
        is_opt = true;
        value = e_value + t_value;
    }
    // Only e is optimized : fix e
    else if (e_is_opt)
    {
        if (e_value == 0)
        {
            is_opt = false;
            value = 0;
            *ret = t;
            t = 0;
        }
        else
        {
            is_opt = false;
            value = 0;
            delete e;
            e = new S_Et(new S_Tf(new S_Fnum(new S_Num(e_value))));
        }
    }
    // Only t is optimized : fix t
    else if (t_is_opt)
    {
        if (t_value == 0)
        {
            is_opt = false;
            value = 0;
            *ret = e;
            e = 0;
        }
        else
        {
            is_opt = false;
            value = 0;
            delete t;
            t = new S_Tf(new S_Fnum(new S_Num(t_value)));
        }
    }
    // None is optimized : do nothing
    else
    {
        is_opt = false;
        value = 0;
    }
    std::cout << value << " | " << is_opt << " | S_Eplus" << std::endl;
}

double S_Eplus::eval(Interpreter& interpreter)
{
    double e_value = e->eval(interpreter);
    double t_value = t->eval(interpreter);
    
    return e_value + t_value;
}

double S_Eplus::eval()
{
    double e_value = e->eval();
    double t_value = t->eval();
    
    return e_value + t_value;
}

void S_Eplus::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
    this->e->staticAnalysis(memId , log);
	this->t->staticAnalysis(memId , log);
}
