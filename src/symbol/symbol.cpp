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

void Symbol::optimize()
{
}

void Symbol::optimize(bool& is_opt, double& value)
{
    
    std::cout << "Symbol::optimize():EXCEPTION" << std::endl;
    throw MathException(CANNOT_EVALUATE_ERROR);
}

std::ostream& operator<< (std::ostream& out, const Symbol& symbol)
{
    return out << symbol.print();
}

double Symbol::eval(Interpreter& interpreter)
{
    
    std::cout << "Symbol::eval()1:EXCEPTION: " << *this << std::endl;
    throw MathException(CANNOT_EVALUATE_ERROR);
}

double Symbol::eval()
{
    
    std::cout << "Symbol::eval()2:EXCEPTION" << std::endl;
    throw MathException(CANNOT_EVALUATE_ERROR);
}

void Symbol::staticAnalysis(std::map< std::string, Variable > & memId ,std::stack<std::string> &log)
{
    
}
