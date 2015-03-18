// ---------------------------------------------
//  plus.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_PLUS_H
#define S_PLUS_H

#include <string>
#include "symbol.h"

class S_Plus : public Symbol
{
private:
protected:
    S_Plus(Symbols s);
public:
    S_Plus();
    virtual ~S_Plus();
};

#endif // S_PLUS_H
