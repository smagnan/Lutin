// ---------------------------------------------
//  bd.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_BD_H
#define S_BD_H

#include <string>
#include "symbol.h"

class S_Bd : public Symbol
{
private:
protected:
    S_Bd(Symbols s);
public:
    S_Bd();
    virtual ~S_Bd();
};

#endif // S_BD_H
