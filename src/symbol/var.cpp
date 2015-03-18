// ---------------------------------------------
//  var.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "var.h"

S_Var::S_Var(Symbols s)
    : S_Expr(s)
{
}

S_Var::S_Var()
    : S_Expr(VAR)
{
}

S_Var::~S_Var()
{
}
