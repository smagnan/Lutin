// ---------------------------------------------
//  fnum.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_FNUM_H
#define S_FNUM_H

#include "f.h"

// Rule include :
#include "num.h"

class S_Fnum : public S_F
{
private:
protected:
    S_Num * num;
public:
    S_Fnum(S_Num* num);
    virtual ~S_Fnum();
    virtual std::string print() const;
    virtual void optimize(bool& is_opt, double& value);
    virtual double eval(Interpreter& interpreter);
    virtual double eval();
};

#endif // S_FNUM_H
