// ---------------------------------------------
//  initlist.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_INITLIST_H
#define S_INITLIST_H

#include "symbol.h"

class S_Initlist : public Symbol
{
private:
protected:
    S_Initlist(Symbols s);
public:
    S_Initlist();
    virtual ~S_Initlist();
};

#endif // S_INITLIST_H
