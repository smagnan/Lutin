// ---------------------------------------------
//  ilire.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "ilire.h"

S_Ilire::S_Ilire(S_Id* id)
    : S_I(), id(id)
{
}

S_Ilire::~S_Ilire()
{
	if(id != 0)
		delete id;
}

std::string S_Ilire::print() const
{
    return "lire " + id->print();
}
