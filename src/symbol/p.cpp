// ---------------------------------------------
//  p.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "p.h"

S_P::S_P(Symbols s)
    : Symbol(s)
{
}

S_P::S_P()
    : Symbol(P)
{
}

// Rule based constructor 
S_P::S_P(std::vector<Symbol*> vectSymbol) : Symbol(P)
{
    try 
    {   // attempt to protect constructor from 
        // empty/incorrectly filled vector
        if (vectSymbol.size() == 2)
        {   
            sbd = (S_Bd*)vectSymbol[0]; // should be a Bd symbol
            sbi = (S_Bi*)vectSymbol[1]; // should be a Bi symbol
        }
        else {
           throw "Incorrect number of symbols in rule based constructor for P";
        }
    } catch (const char * e)
    {
        std::cerr << *e << std::endl;
    }
}

// destructor
S_P::~S_P()
{
}
