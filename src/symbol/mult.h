// ---------------------------------------------
//  mult.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_MULT_H
#define S_MULT_H

#include "symbol.h"

class S_Mult : public Symbol
{
private:
protected:
public:
    S_Mult();
    virtual ~S_Mult();
    virtual std::string print();
};

#endif // S_MULT_H
