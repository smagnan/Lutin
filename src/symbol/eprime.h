// ---------------------------------------------
//  eprime.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EPRIME_H
#define S_EPRIME_H

#include "symbol.h"

// Rule include :
#include "e.h"

class S_Eprime : public Symbol
{
private:
protected:
    S_E * e;
public:
    S_Eprime(S_E* e);
    virtual ~S_Eprime();
    virtual std::string print() const;
    virtual void optimize();
	virtual void staticAnalysis(std::map< std::string, Variable > & memId, std::vector<std::string> &log);
    virtual double eval(Interpreter& interpreter);
    virtual double eval();
};

#endif // S_EPRIME_H
