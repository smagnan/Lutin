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
public:
    S_E();
    virtual ~S_E();
    virtual std::string print();
};

#endif // S_E_H
