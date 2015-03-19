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

// Rule based include
#include "t.h"
#include "plus.h"
#include "minus.h"

class S_E : public Symbol
{
private:

protected:
    S_E(Symbols s);
    
    // Rule based member var
    S_Plus * plus;
    S_Minus * minus;
    S_T * t;
    S_E * e;
public:
    S_E();
    
    // Rule based constructors
    S_E(S_E*, S_Plus*, S_T*);
    S_E(S_E*, S_Minus*, S_T*);
    S_E(S_T*);

    virtual ~S_E();
};

#endif // S_E_H
