// ---------------------------------------------
//  tdivide.cpp
//
//  Created  :
//      by   : Pierre GODARD
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

void S_Tdivide::optimize(bool& is_opt, double& value, S_T** ret)
{
    bool t_is_opt;
    double t_value;
    S_T* t_ret = 0;
    bool f_is_opt;
    double f_value;
    t->optimize(t_is_opt, t_value, &t_ret);
    f->optimize(f_is_opt, f_value);
    
    if (t_ret)
    {
        delete t;
        t = t_ret;
    }
    
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
        if (f_value == 1)
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
            delete f;
            f = new S_Fnum(new S_Num(f_value));
        }
    }
    // None is optimized : do nothing
    else
    {
        is_opt = false;
        value = 0;
    }
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

void S_Tdivide::staticAnalysis(std::map< std::string, Variable > & memId)
{
    this->t->staticAnalysis(memId);
    this->f->staticAnalysis(memId);
}
