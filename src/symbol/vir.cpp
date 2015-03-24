// ---------------------------------------------
//  vir.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "vir.h"

S_Vir::S_Vir()
    : Symbol(VIR)
{
}

S_Vir::~S_Vir()
{
}

std::string S_Vir::print() const
{
    return ",";
}
