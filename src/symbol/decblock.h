// ---------------------------------------------
//  decblock.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_DECBLOCK_H
#define S_DECBLOCK_H

#include "symbol.h"

class S_Decblock : public Symbol
{
private:
protected:
    S_Decblock(Symbols s);
public:
    S_Decblock();
    virtual ~S_Decblock();
};

#endif // S_DECBLOCK_H
