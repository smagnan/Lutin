// ---------------------------------------------
//  init.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_INIT_H
#define S_INIT_H

#include "symbol.h"

class S_Init : public Symbol
{
private:
protected:
    S_Init(Symbols s);
public:
    S_Init();
    virtual ~S_Init();
};

#endif // S_INIT_H
