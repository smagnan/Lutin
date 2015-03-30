// ---------------------------------------------
//  f.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_F_H
#define S_F_H

#include "t.h"

class S_F : public S_T
{
private:
protected:
    S_F(Symbols s);
public:
    S_F();
    virtual ~S_F();
    virtual std::string print() const;
    virtual void optimize(bool& is_opt, double& value);
	virtual void staticAnalysis(std::map< std::string, Variable > & memId, std::vector<std::string> &log);
};

#endif // S_F_H
