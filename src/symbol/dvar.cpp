// ---------------------------------------------
//  dvar.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "dvar.h"

S_Dvar::S_Dvar(S_Id* id, S_Idl* idl)
    : S_D(), id(id), idl(idl)
{
}

S_Dvar::~S_Dvar()
{
	if(id != 0)
		delete id;
	if(idl != 0)
		delete idl;
}

std::string S_Dvar::print() const
{
    return "var " + id->print() + idl->print();
}
