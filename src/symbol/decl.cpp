// ---------------------------------------------
//  decl.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "decl.h"

S_Decl::S_Decl(Symbols s)
    : Symbol(s)
{
}

S_Decl::S_Decl()
    : Symbol(DECL)
{
}

S_Decl::~S_Decl()
{
}
