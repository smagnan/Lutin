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

// Rule based include
#include "t.h"
#include "plus.h"
#include "minus.h"

class S_E : public Symbol
{
private:
    S_Plus * plus;
    S_Minus * minus;
    S_T * t;
    S_E * e;

protected:
    S_E(Symbols s);
public:
    S_E();
    S_E(vector<Symbol*>);
    virtual ~S_E();
};

#endif // S_E_H
