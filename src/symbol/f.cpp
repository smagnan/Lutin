// ---------------------------------------------
//  f.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "f.h"

S_F::S_F(Symbols s)
    : Symbol(s)
{
}

S_F::S_F()
    : Symbol(F)
{
}
/*
S_F::S_F(S_Openby* sopenby, S_E* se, S_Closeby* scloseby)
    : Symbol(F), openby(sopenby), e(se), closeby(scloseby), id(NULL), num(NULL)
{
}

S_F::S_F(S_Id * sid)
    : Symbol(F), openby(NULL), e(NULL), closeby(NULL), id(sid), num(NULL)
{
}

S_F::S_F(S_Num * snum)
    : Symbol(F), openby(NULL), e(NULL), closeby(NULL), id(NULL), num(snum)
{
}
*/
S_F::~S_F()
{
}
