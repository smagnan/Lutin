// ---------------------------------------------
//  expr.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "expr.h"

S_Expr::S_Expr(Symbols s)
    : Symbol(s)
{
}

S_Expr::S_Expr()
    : Symbol(EXPR)
{
}

S_Expr::~S_Expr()
{
}
