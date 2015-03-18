// ---------------------------------------------
//  d.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_D_H
#define S_D_H

#include <string>
#include "symbol.h"

class S_D : public Symbol
{
private:
protected:
    S_D(Symbols s);
public:
    S_D();
    virtual ~S_D();
};

#endif // S_D_H
