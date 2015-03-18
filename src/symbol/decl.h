// ---------------------------------------------
//  decl.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_DECL_H
#define S_DECL_H

#include <string>
#include "symbol.h"

class S_Decl : public Symbol
{
private:
protected:
    S_Decl(Symbols s);
public:
    S_Decl();
    virtual ~S_Decl();
};

#endif // S_DECL_H
