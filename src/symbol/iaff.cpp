// ---------------------------------------------
//  iaff.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "iaff.h"

S_Iaff::S_Iaff(S_Id * id, S_Eprime* eprime)
    : S_I(), id(id), eprime(eprime)
{
}

S_Iaff::~S_Iaff()
{
}

std::string S_Iaff::print()
{
    return id->print() + " := " + eprime->print();
}
