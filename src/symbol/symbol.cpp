// ---------------------------------------------
//  symbol.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "symbol.h"

const char* SYM[F+1] = {
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
    "F"
};

Symbol::Symbol() : 
    id(-1)
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
