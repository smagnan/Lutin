// ---------------------------------------------
//  minus.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_MINUS_H
#define S_MINUS_H

#include <string>
#include "symbol.h"

class S_Minus : public Symbol
{
private:
protected:
    S_Minus(Symbols s);
public:
    S_Minus();
    virtual ~S_Minus();
    virtual std::string print();
};

#endif // S_MINUS_H
