// ---------------------------------------------
//  term.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "term.h"

S_Term::S_Term(Symbols s)
    : Symbol(s)
{
}

S_Term::S_Term()
    : Symbol(TERM)
{
}

S_Term::~S_Term()
{
}
