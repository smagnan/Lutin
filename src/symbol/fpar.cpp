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
}

std::string S_Fpar::print() const
{
    return "(" + e->print() + ")";
}

Symbol* S_Fpar::optimize()
{
    S_E* s = (S_E*)e->optimize();
    if (s)
    {
        delete e;
        e = s;
        return e;
    }
    return 0;
}

double S_Fpar::eval(Interpreter& interpreter)
{
    return 0;
}
