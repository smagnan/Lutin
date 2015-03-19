// ---------------------------------------------
//  i.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "i.h"

S_I::S_I(Symbols s)
    : Symbol(s)
{
}

S_I::S_I()
    : Symbol(I)
{
}

// RB
S_I::S_I(S_Write* swrite, S_Eprime* seprime) 
    : Symbol(I), write(swrite), eprime(seprime), id(NULL), aff(NULL), read(NULL)
{
}

S_I::S_I(S_Id* sid, S_Aff* saff, S_Eprime* seprime)
    : Symbol(I), write(NULL), eprime(seprime), id(sid), aff(saff), read(NULL)
{
}

S_I::S_I(S_Read* sread, S_Id* sid)
    : Symbol(I), write(NULL), eprime(NULL), id(sid), aff(NULL), read(sread)
{
}

S_I::~S_I()
{
}
