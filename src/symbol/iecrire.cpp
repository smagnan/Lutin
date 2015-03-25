// ---------------------------------------------
//  iecrire.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "iecrire.h"

S_Iecrire::S_Iecrire(S_Eprime* eprime)
    : S_I(), eprime(eprime)
{
}

S_Iecrire::~S_Iecrire()
{
	if(eprime != 0)
		delete eprime;
}

std::string S_Iecrire::print() const
{
    return "ecrire " + eprime->print();
}
