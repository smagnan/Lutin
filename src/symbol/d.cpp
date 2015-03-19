// ---------------------------------------------
//  d.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "d.h"

S_D::S_D(Symbols s)
    : Symbol(s)
{
}

S_D::S_D()
    : Symbol(D)
{
}

// RB
S_D::S_D(S_Var* svar, S_Id* sid, S_Idl* sidl)
    : Symbol(D), var(svar), id(sid), idl(sidl), m_const(NULL), ini(NULL), inil(NULL)
{
}

S_D::S_D(S_Const* sconst, S_Ini* sini, S_Inil* sinil)
    : Symbol(D), var(NULL), id(NULL), idl(NULL), m_const(sconst), ini(sini), inil(sinil)
{
}

S_D::~S_D()
{
}
