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
public:
    S_Eq();
    virtual ~S_Eq();
    virtual std::string print();
};

#endif // S_EQ_H
