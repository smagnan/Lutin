// ---------------------------------------------
//  bd.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_BD_H
#define S_BD_H

#include "symbol.h"

class S_Bd : public Symbol
{
private:
protected:
public:
    S_Bd();
    virtual ~S_Bd();
    virtual std::string print();
};

#endif // S_BD_H
