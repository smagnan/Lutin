// ---------------------------------------------
//  aff.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_AFF_H
#define S_AFF_H

#include "symbol.h"

class S_Aff : public Symbol
{
private:
protected:
    S_Aff(Symbols s);
public:
    S_Aff();
    virtual ~S_Aff();
};

#endif // S_AFF_H
