// ---------------------------------------------
//  fpar.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_FPAR_H
#define S_FPAR_H

#include "f.h"

// Rule include :
#include "e.h"

class S_Fpar : public S_F
{
private:
protected:
    S_E * e;
public:
    S_Fpar(S_E* e);
    virtual ~S_Fpar();
    virtual std::string print() const;
    virtual void optimize(bool& is_opt, double& value);
    virtual double eval(Interpreter& interpreter);
    virtual double eval();
	virtual void staticAnalysis(std::map< std::string, Variable > & memId);
};

#endif // S_FPAR_H
