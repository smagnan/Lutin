// ---------------------------------------------
//  eq.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EQ_H
#define S_EQ_H

#include "symbol.h"

class S_Eq : public Symbol
{
private:
protected:
    S_Eq(Symbols s);
public:
    S_Eq();
    virtual ~S_Eq();
};

#endif // S_EQ_H
