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

Symbol* Symbol::optimize()
{
    return 0;
}

std::ostream& operator<< (std::ostream& out, const Symbol& symbol)
{
    return out << symbol.print();
}

double Symbol::eval(Interpreter& interpreter)
{
    throw MathException(CANNOT_EVALUATE_ERROR);
}

void Symbol::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
    
}
