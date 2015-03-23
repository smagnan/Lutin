// ---------------------------------------------
//  var.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "var.h"

S_Var::S_Var()
    : Symbol(VAR)
{
}

S_Var::~S_Var()
{
}

std::string S_Var::print()
{
    return "var";
}
