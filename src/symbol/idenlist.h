// ---------------------------------------------
//  idenlist.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_IDENLIST_H
#define S_IDENLIST_H

#include "symbol.h"

class S_Idenlist : public Symbol
{
private:
protected:
    S_Idenlist(Symbols s);
public:
    S_Idenlist();
    virtual ~S_Idenlist();
};

#endif // S_IDENLIST_H
