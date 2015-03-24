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
}

std::string S_Iecrire::print()
{
    return "ecrire " + eprime->print();
}
