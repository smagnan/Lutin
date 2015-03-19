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
// RB
#include "e.h"

class S_Eprime : public Symbol
{
private:
protected:
    S_Eprime(Symbols s);
    // RB
    S_E * e;
public:
    S_Eprime();
    S_Eprime(S_E*);
    virtual ~S_Eprime();
};

#endif // S_EPRIME_H
