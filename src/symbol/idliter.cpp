// ---------------------------------------------
//  idliter.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "idliter.h"

S_Idliter::S_Idliter(S_Idl* idl, S_Id* id)
    : S_Idl(), idl(idl), id(id)
{
}

S_Idliter::~S_Idliter()
{
}

std::string S_Idliter::print()
{
    return idl->print() + ", " + id->print();
}
