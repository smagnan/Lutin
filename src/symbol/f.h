// ---------------------------------------------
//  f.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_F_H
#define S_F_H

#include <string>
#include "symbol.h"

class S_F : public Symbol
{
private:
protected:
    S_F(Symbols s);
public:
    S_F();
    virtual ~S_F();
};

#endif // S_F_H
