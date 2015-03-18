// ---------------------------------------------
//  t.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_T_H
#define S_T_H

#include <string>
#include "symbol.h"

class S_T : public Symbol
{
private:
protected:
    S_T(Symbols s);
public:
    S_T();
    virtual ~S_T();
};

#endif // S_T_H
