// ---------------------------------------------
//  inil.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_INIL_H
#define S_INIL_H

#include <string>
#include "symbol.h"

class S_Inil : public Symbol
{
private:
protected:
    S_Inil(Symbols s);
public:
    S_Inil();
    virtual ~S_Inil();
};

#endif // S_INIL_H
