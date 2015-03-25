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
	if(idl != 0)
		delete idl;
	if(id != 0)
		delete id;
}

std::string S_Idliter::print() const
{
    return idl->print() + ", " + id->print();
}
