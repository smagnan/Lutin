// ---------------------------------------------
//  eprime.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EPRIME_H
#define S_EPRIME_H

#include <string>
#include "symbol.h"

class S_Eprime : public Symbol
{
private:
protected:
    S_Eprime(Symbols s);
public:
    S_Eprime();
    virtual ~S_Eprime();
};

#endif // S_EPRIME_H
