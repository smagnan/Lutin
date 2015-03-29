// ---------------------------------------------
//  eminus.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "eminus.h"
#include "fnum.h"
#include "tf.h"
#include "et.h"

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

void S_Eminus::optimize(bool& is_opt, double& value)
{
    bool e_is_opt;
    double e_value;
    bool t_is_opt;
    double t_value;
    e->optimize(e_is_opt, e_value);
    t->optimize(t_is_opt, t_value);
    
    // Both constants : optimize
    if (e_is_opt && t_is_opt)
    {
        is_opt = true;
        value = e_value - t_value;
    }
    // Only e is optimized : fix e
    else if (e_is_opt)
    {
        // Neutral element
        if (e_value == 0)
        {
            // TODO
        }
        // Other
        else
        {
            is_opt = false;
            value = 0;
            delete t;
            e = new S_Et(new S_Tf(new S_Fnum(new S_Num(e_value))));
        }
    }
    // Only f is optimized : fix f
    else if (t_is_opt)
    {
        // Neutral element
        if (t_value == 1)
        {
            // TODO
        }
        // Other
        else
        {
            is_opt = false;
            value = 0;
            delete t;
            t = new S_Tf(new S_Fnum(new S_Num(t_value)));
        }
    }
    // None is optimized : do nothing
}

double S_Eminus::eval(Interpreter& interpreter)
{
    double e_value = e->eval(interpreter);
    double t_value = t->eval(interpreter);
    
    return e_value - t_value;
}

double S_Eminus::eval()
{
    double e_value = e->eval();
    double t_value = t->eval();
    
    return e_value - t_value;
}

void S_Eminus::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
    this->e->staticAnalysis(memId ,log);
	this->t->staticAnalysis(memId ,log);
}
