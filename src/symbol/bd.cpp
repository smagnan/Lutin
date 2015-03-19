// ---------------------------------------------
//  bd.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "bd.h"

S_Bd::S_Bd(Symbols s)
    : Symbol(s)
{
}

S_Bd::S_Bd()
    : Symbol(BD)
{
}

// R-B C
S_Bd::S_Bd(S_Bd* sbd, S_D* sd, S_Pv* spv) 
    : Symbol(BD), bd(sbd), d(sd), pv(spv)
{
}

S_Bd::~S_Bd()
{
}
