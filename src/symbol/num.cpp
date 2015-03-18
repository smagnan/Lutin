// ---------------------------------------------
//  num.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "num.h"

S_Num::S_Num(Symbols s)
    : S_Expr(s)
{
}

S_Num::S_Num()
    : S_Expr(NUM), value(0)
{
}

S_Num::S_Num(double v)
    : S_Expr(NUM), value(v)
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
