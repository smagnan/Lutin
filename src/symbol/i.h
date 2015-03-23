// ---------------------------------------------
//  i.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_I_H
#define S_I_H

#include <string>
#include "symbol.h"

class S_I : public Symbol
{
private:
protected:
    S_I(Symbols s);
public:
    S_I();
    virtual ~S_I();
};

#endif // S_I_H
