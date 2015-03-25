// ---------------------------------------------
//  openby.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "openby.h"

S_Openby::S_Openby()
    : Symbol(OPENBY)
{
}

S_Openby::~S_Openby()
{
}

std::string S_Openby::print() const
{
    return "(";
}
