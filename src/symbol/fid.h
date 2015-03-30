// ---------------------------------------------
//  fid.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_FID_H
#define S_FID_H

#include "f.h"

// Rule include :
#include "id.h"

class S_Fid : public S_F
{
private:
protected:
    S_Id * id;
public:
    S_Fid(S_Id* id);
    virtual ~S_Fid();
    virtual std::string print() const;
    virtual void optimize(bool& is_opt, double& value);
    virtual double eval(Interpreter& interpreter);
    virtual double eval();
	virtual void staticAnalysis(std::map< std::string, Variable > & memId);
};

#endif // S_FID_H
