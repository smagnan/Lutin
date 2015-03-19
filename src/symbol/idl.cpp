// ---------------------------------------------
//  idl.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "idl.h"

S_Idl::S_Idl(Symbols s)
    : Symbol(s)
{
}

S_Idl::S_Idl()
    : Symbol(IDL)
{
}

// RB

S_Idl::S_Idl(S_Idl* sidl, S_Vir* svir, S_Id* sid)
    : Symbol(IDL), idl(sidl), vir(svir), id(sid)
{
}

S_Idl::~S_Idl()
{
}
