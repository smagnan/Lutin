// ---------------------------------------------
//  symbol.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "symbol.h"

Symbol::Symbol() : 
    id(SYMBOL)
{
    
}

Symbol::Symbol(int i) : 
    id(i)
{
    
}

Symbol::~Symbol()
{
    
}

Symbol::operator int() const
{
    return id;
}

std::string Symbol::print() const
{
    return "";
} 

std::ostream& operator<< (std::ostream& out, const Symbol& symbol)
{
    return out << symbol.print();
}
