// ---------------------------------------------
//  num.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_NUM_H
#define S_NUM_H

#include <string>
#include "expr.h"

class S_Num : public S_Expr
{
private:
    double value;
protected:
    S_Num(Symbols s);
public:
    S_Num();
    virtual ~S_Num();
    double getValue();
    void setValue(double v);
};

#endif // S_NUM_H
