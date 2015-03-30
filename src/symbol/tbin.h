// ---------------------------------------------
//  tbin.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_TBIN_H
#define S_TBIN_H

#include "t.h"

// Rule include :
#include "f.h"

class S_Tbin : public S_T
{
private:
protected:
    S_T * t;
    S_F * f;

public:
    S_Tbin(S_T* t, S_F* f);
    virtual ~S_Tbin();
    virtual std::string print() const;
    virtual void optimize(bool& is_opt, double& value, S_T** ret);
    virtual void staticAnalysis(std::map< std::string, Variable > & memId);
};

#endif // S_TBIN_H
