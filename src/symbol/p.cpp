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
S1_P::S_P(vector<Symbol> vectSymbol) : Symbol(P)
{
    try 
    {   // attempt to protect constructor from 
        // empty/incorrectly filled vector
        if (vectSymbol.size() == 2)
        {   
            sbd = vectSymbol[0]; // should be a Bd symbol
            sbi = vectSymbol[1]; // should be a Bi symbol
        }
        else {
           throw "Incorrect number of symbols in rule based constructor for P"
        }
    } catch (const char * e)
    {
        std::cerr << *e << endl;
    }
}

// destructor
S_P::~S_P()
{
}
