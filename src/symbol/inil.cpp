// ---------------------------------------------
//  inil.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "inil.h"

S_Inil::S_Inil(Symbols s)
    : Symbol(s)
{
}

S_Inil::S_Inil()
    : Symbol(INIL)
{
}

//RB
S_Inil::S_Inil(S_Inil* sinil, S_Vir* svir, S_Ini* sini)
    : Symbol(INIL), inil(sinil), vir(svir), ini(sini)
{
}

S_Inil::~S_Inil()
{
}
