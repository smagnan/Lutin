// ---------------------------------------------
//  const.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "const.h"

S_Const::S_Const(Symbols s)
    : S_Expr(s)
{
}

S_Const::S_Const()
    : S_Expr(CONST)
{
}

S_Const::~S_Const()
{
}
