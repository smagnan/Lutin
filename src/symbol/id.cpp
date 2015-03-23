// ---------------------------------------------
//  id.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "id.h"

S_Id::S_Id()
    : Symbol(ID), value(0)
{
}

S_Id::S_Id(std::string v)
    : Symbol(ID), value(v)
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

std::string S_Id::print()
{
    return value;
}
