// ---------------------------------------------
//  id.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "id.h"

S_Id::S_Id(Symbols s)
    : S_Expr(s)
{
}

S_Id::S_Id()
    : S_Expr(ID), value(0)
{
}

S_Id::S_Id(std::string v)
    : S_Expr(ID), value(v)
{
}

S_Id::~S_Id()
{
}

std::string S_Id::getValue()
{
    return value;
}

void S_Id::setValue(std::string v)
{
    value = v;
}
