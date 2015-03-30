// ---------------------------------------------
//  eplus.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EPLUS_H
#define S_EPLUS_H

#include "ebin.h"

// Rule include :
#include "t.h"

class S_Eplus : public S_Ebin
{
private:
protected:
public:
    S_Eplus(S_E* e, S_T* t);
    virtual ~S_Eplus();
    virtual std::string print() const;
    virtual void optimize(bool& is_opt, double& value, S_E** ret);
	virtual void staticAnalysis(std::map< std::string, Variable > & memId);
    virtual double eval(Interpreter& interpreter);
    virtual double eval();
};

#endif // S_EPLUS_H
