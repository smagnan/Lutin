// ---------------------------------------------
//  instblock.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_INSTBLOCK_H
#define S_INSTBLOCK_H

#include <string>
#include "symbol.h"

class S_Instblock : public Symbol
{
private:
protected:
    S_Instblock(Symbols s);
public:
    S_Instblock();
    virtual ~S_Instblock();
};

#endif // S_INSTBLOCK_H
