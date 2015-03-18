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
    : S_Expr(NUM)
{
}

S_Num::~S_Num()
{
}
