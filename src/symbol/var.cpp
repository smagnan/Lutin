// ---------------------------------------------
//  var.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "var.h"

S_Var::S_Var(Symbols s)
    : S_E(s)
{
}

S_Var::S_Var()
    : S_E(VAR)
{
}

S_Var::~S_Var()
{
}
