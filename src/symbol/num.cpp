// ---------------------------------------------
//  num.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "num.h"

S_Num::S_Num()
    : Symbol(NUM), value(0)
{
}

S_Num::S_Num(double v)
    : Symbol(NUM), value(v)
{
}

S_Num::~S_Num()
{
}

double S_Num::getValue()
{
    return value;
}

void S_Num::setValue(double v)
{
    value = v;
}

std::string S_Num::print()
{
    std::ostringstream strs;
    strs << value;
    return strs.str();
}
