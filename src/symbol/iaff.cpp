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
	if(id != 0)
		delete id;
	if(eprime != 0)
		delete eprime;
}

std::string S_Iaff::print() const
{
    return id->print() + " := " + eprime->print();
}
