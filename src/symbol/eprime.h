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

// Rule include :
#include "e.h"

class S_Eprime : public Symbol
{
private:
protected:
    S_E * e;
public:
    S_Eprime(S_E* e);
    virtual ~S_Eprime();
    virtual std::string print();
};

#endif // S_EPRIME_H
