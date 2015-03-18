// ---------------------------------------------
//  exprime.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EXPRIME_H
#define S_EXPRIME_H

#include "symbol.h"

class S_Exprime : public Symbol
{
private:
protected:
    S_Exprime(Symbols s);
public:
    S_Exprime();
    virtual ~S_Exprime();
};

#endif // S_EXPRIME_H
