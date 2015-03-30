// ---------------------------------------------
//  biiter.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_BIITER_H
#define S_BIITER_H

#include "bi.h"

// Rule include :
#include "bi.h"
#include "i.h"

class S_Biiter : public S_Bi
{
private:
protected:
    S_Bi * bi;
    S_I * i;
public:
    S_Biiter(S_Bi* bi, S_I* i);
    virtual ~S_Biiter();
    virtual std::string print() const;
    virtual void optimize();
    virtual void staticAnalysis(std::map< std::string, Variable > & memId);
    S_Bi * next() { return bi;};
    S_I * get_instruction() { return i;};
};


#endif // S_BIITER_H
