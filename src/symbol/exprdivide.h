// ---------------------------------------------
//  exprdivide.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EXPRDIVIDE_H
#define S_EXPRDIVIDE_H

#include "exprbin.h"

class S_Exprdivide : public S_Exprbin
{
private:
protected:
    S_Exprdivide(Symbols s);
public:
    S_Exprdivide();
    virtual ~S_Exprdivide();
};

#endif // S_EXPRDIVIDE_H
