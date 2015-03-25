// ---------------------------------------------
//  e.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_E_H
#define S_E_H

#include "symbol.h"

class S_E : public Symbol
{
private:
protected:
    S_E(Symbols s);
public:
    S_E();
    virtual ~S_E();
    virtual std::string print() const;
};

#endif // S_E_H
