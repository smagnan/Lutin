// ---------------------------------------------
//  num.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "num.h"

S_Num::S_Num()
    : S_F(NUM), value(0)
{
}

S_Num::S_Num(double v)
    : S_F(NUM), value(v)
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

std::string S_Num::print() const
{
    std::ostringstream strs;
    strs << value;
    return strs.str();
}
