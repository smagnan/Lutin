// ---------------------------------------------
//  symbol.cpp
//
//	Created	 :
//		by 	 : Antoine Chevrot
//
// ---------------------------------------------

#include "symbol.h"

Symbol::Symbol(int id) : 
    ident(id)
{
    
}

Symbol::~Symbol()
{
    
}

Symbol::operator int() const
{
    return ident;
}
