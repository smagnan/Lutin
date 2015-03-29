// ---------------------------------------------
//  tdivide.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "tdivide.h"
#include "fnum.h"
#include "tf.h"

S_Tdivide::S_Tdivide(S_T* t, S_F* f)
    : S_Tbin(t, f)
{
}

S_Tdivide::~S_Tdivide()
{
}

std::string S_Tdivide::print() const
{
    return t->print() + " / " + f->print();
}

void S_Tdivide::optimize(bool& is_opt, double& value)
{
    bool t_is_opt;
    double t_value;
    bool f_is_opt;
    double f_value;
    t->optimize(t_is_opt, t_value);
    f->optimize(f_is_opt, f_value);
    
    // Divide by zero : do not optimize
    if (f_is_opt && f_value == 0)
    {
        is_opt = false;
        value = 0;
    }
    // Dividing zero : optimize
    else if (t_is_opt && t_value == 0)
    {
        is_opt = true;
        value = 0;
    }
    // Both constants : optimize
    else if (t_is_opt && f_is_opt)
    {
        is_opt = true;
        value = t_value / f_value;
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
        // Neutral element
        if (f_value == 1)
        {
            // TODO: treated above
        }
        // Other
        else
        {
            is_opt = false;
            value = 0;
            delete f;
            f = new S_Fnum(new S_Num(f_value));
        }
    }
    // None is optimized : do nothing
}

double S_Tdivide::eval(Interpreter& interpreter)
{
    double t_value = t->eval(interpreter);
    double f_value = f->eval(interpreter);
    
    if (f_value == 0)
    {
        throw MathException(DIVIDE_BY_ZERO_ERROR);
    }
    
    return t_value / f_value;
}

double S_Tdivide::eval()
{
    double t_value = t->eval();
    double f_value = f->eval();
    
    if (f_value == 0)
    {
        throw MathException(DIVIDE_BY_ZERO_ERROR);
    }
    
    return t_value / f_value;
}

void S_Tdivide::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
    this->t->staticAnalysis(memId ,log);
	this->f->staticAnalysis(memId ,log);
}
