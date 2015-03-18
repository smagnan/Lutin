// ---------------------------------------------
//  e.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "e.h"

S_E::S_E(Symbols s)
    : Symbol(s)
{
}

S_E::S_E()
    : Symbol(E)
{
}

S_E::S_E(vector<Symbol> vectSymbol)
{
    try 
    {   // attempt to protect constructor from 
        // empty/incorrectly filled vector
        vectSize = vectSymbol.size();
        if (vectSize == 3 || vectSize == 1)
        {   
            if (vectSize == 3)
            // E -> E + T 
            // E -> E - T
            {
                e = (S_E)vectSymbol[0];
                t = (S_T)vectSymbol[2];
                // TODO : find type of terminal (+ or -) and cast vectSymbol to the right type
            }
            if (vectSize == 1)
            // E -> T
            {   
                sT = (S_T)vectSymbol[0];
            }
        }
        else {
           throw "Incorrect number of symbols in rule based constructor for E"
        }
    } catch (const char * e)
    {
        std::cerr << *e << endl;
    }
}


S_E::~S_E()
{
}
