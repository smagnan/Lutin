// ---------------------------------------------
//  pv.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "pv.h"

S_Pv::S_Pv()
    : Symbol(PV)
{
}

S_Pv::~S_Pv()
{
}

std::string S_Pv::print()
{
    return ";";
}
