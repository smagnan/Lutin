// ---------------------------------------------
//  bi.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "bi.h"

S_Bi::S_Bi(Symbols s)
    : Symbol(s)
{
}

S_Bi::S_Bi()
    : Symbol(BI)
{
}

S_Bi::S_Bi(S_Bi* sbi, S_I* si, S_Pv* spv)
    : Symbol(BI), bi(sbi), i(si), pv(spv)
{
}


S_Bi::~S_Bi()
{
}
