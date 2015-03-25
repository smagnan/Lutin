// ---------------------------------------------
//  num.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_NUM_H
#define S_NUM_H

#include "f.h"

class S_Num : public S_F
{
private:
    double value;
protected:
public:
    S_Num();
    S_Num(double v);
    virtual ~S_Num();
    double getValue();
    void setValue(double v);
    virtual std::string print() const;
    virtual double eval(Interpreter& interpreter);
};

#endif // S_NUM_H
