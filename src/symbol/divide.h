// ---------------------------------------------
//  divide.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_DIVIDE_H
#define S_DIVIDE_H

#include "symbol.h"

class S_Divide : public Symbol
{
private:
protected:
    S_Divide(Symbols s);
public:
    S_Divide();
    virtual ~S_Divide();
};

#endif // S_DIVIDE_H
