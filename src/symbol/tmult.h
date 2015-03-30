// ---------------------------------------------
//  tmult.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_TMULT_H
#define S_TMULT_H

#include "tbin.h"

class S_Tmult : public S_Tbin
{
private:
protected:
public:
    S_Tmult(S_T* t, S_F* f);
    virtual ~S_Tmult();
    virtual std::string print() const;
    virtual void optimize(bool& is_opt, double& value, S_T** ret);
    virtual double eval(Interpreter& interpreter);
    virtual double eval();
	virtual void staticAnalysis(std::map< std::string, Variable > & memId);
};

#endif // S_TMULT_H
