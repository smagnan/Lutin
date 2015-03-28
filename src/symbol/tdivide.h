// ---------------------------------------------
//  tdivide.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_TDIVIDE_H
#define S_TDIVIDE_H

#include "tbin.h"

class S_Tdivide : public S_Tbin
{
private:
protected:
public:
    S_Tdivide(S_T* t, S_F* f);
    virtual ~S_Tdivide();
    virtual std::string print() const;
    virtual double eval(Interpreter& interpreter);
	virtual void staticAnalysis(std::map< std::string, Variable > & memId, std::stack<std::string> &log);
};

#endif // S_TDIVIDE_H
