// ---------------------------------------------
//  p.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_P_H
#define S_P_H

#include <string>
#include "symbol.h"

class S_P : public Symbol
{
private:
protected:
    S_P(Symbols s);
public:
    S_P();
    virtual ~S_P();
};

#endif // S_P_H
