// ---------------------------------------------
//  num.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_NUM_H
#define S_NUM_H

#include "expr.h"

class S_Num : public S_Expr
{
private:
protected:
    S_Num(Symbols s);
public:
    S_Num();
    virtual ~S_Num();
};

#endif // S_NUM_H
