// ---------------------------------------------
//  e.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "e.h"

S_E::S_E(Symbols s)
    : Symbol(s)
{
}

S_E::S_E()
    : Symbol(E)
{
}

// Rule based constr
S_E::S_E(S_E* se, S_Plus* splus, S_T* st) : Symbol(E), plus(splus), minus(NULL), t(st), e(se)
{
}

S_E::S_E(S_E* se, S_Minus* sminus, S_T* st) : Symbol(E), plus(NULL), minus(sminus), t(st), e(se)
{
}

S_E::S_E(S_T* st) : Symbol(T), plus(NULL), minus(NULL), t(st), e(NULL)
{
}

// Destructor
S_E::~S_E()
{
}
