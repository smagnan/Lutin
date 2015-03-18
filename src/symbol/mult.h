// ---------------------------------------------
//  mult.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_MULT_H
#define S_MULT_H

#include <string>
#include "symbol.h"

class S_Mult : public Symbol
{
private:
protected:
    S_Mult(Symbols s);
public:
    S_Mult();
    virtual ~S_Mult();
};

#endif // S_MULT_H
