// ---------------------------------------------
//  ini.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "ini.h"

S_Ini::S_Ini(Symbols s)
    : Symbol(s)
{
}

S_Ini::S_Ini()
    : Symbol(INI)
{
}

// RB
S_Ini::S_Ini(S_Id* sid, S_Eq* seq, S_Num* snum) 
    : Symbol(INI), id(sid), eq(seq), num(snum)
{
}

S_Ini::~S_Ini()
{
}
