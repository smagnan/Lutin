// ---------------------------------------------
//  symbol.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "symbol.h"

const char* SYM[NB_SYMBOLS] = {
    "PLUS",
    "MINUS",
    "MULT",
    "DIVIDE",
    "OPENBY",
    "CLOSEBY",
    "ID",
    "NUM",
    "VAR",
    "CONST",
    "PV",
    "VIR",
    "EQ",
    "WRITE",
    "READ",
    "AFF",
    "END",
    "P",
    "BD",
    "BI",
    "D",
    "I",
    "IDL",
    "INI",
    "INIL",
    "E",
    "EPRIME",
    "T",
    "F",
    "SYMBOL"
};

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

std::string Symbol::print()
{
    return "";
}
