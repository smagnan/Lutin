// ---------------------------------------------
//  const.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "const.h"

S_Const::S_Const()
    : Symbol(CONST)
{
}

S_Const::~S_Const()
{
}

std::string S_Const::print() const
{
    return "const";
}
