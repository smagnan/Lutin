// ---------------------------------------------
//  initlist.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "initlist.h"

S_Initlist::S_Initlist(Symbols s)
    : Symbol(s)
{
}

S_Initlist::S_Initlist()
    : Symbol(INITLIST)
{
}

S_Initlist::~S_Initlist()
{
}
