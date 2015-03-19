// ---------------------------------------------
//  t.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "t.h"

S_T::S_T(Symbols s)
    : Symbol(s)
{
}

S_T::S_T()
    : Symbol(T)
{
}

// RB
S_T::S_T(S_T* st, S_Mult* smult, S_F* sf)
    : Symbol(T), t(st), mult(smult), divide(NULL), f(sf)
{
}

S_T::S_T(S_T* st, S_Divide* sdivide, S_F* sf)
    : Symbol(T), t(st), mult(NULL), divide(sdivide), f(sf)
{
}

S_T::S_T(S_F* sf)
    : Symbol(T), t(NULL), mult(NULL), divide(NULL), f(sf)
{
}

S_T::~S_T()
{
}
