// ---------------------------------------------
//  e.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_E_H
#define S_E_H

#include <string>
#include "symbol.h"
#include <vector>
#include <iostream>

// Rule based include
#include "t.h"
#include "plus.h"
#include "minus.h"

class S_E : public Symbol
{
private:

protected:
    S_E(Symbols s);
    
    S_Plus * plus = NULL;
    S_Minus * minus = NULL;
    S_T * t = NULL;
    S_E * e = NULL;
public:
    S_E();
    S_E(std::vector<Symbol*>);
    virtual ~S_E();
};

#endif // S_E_H
