// ---------------------------------------------
//  bditer.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_BDITER_H
#define S_BDITER_H

#include "bd.h"

// Rule include :
#include "bd.h"
#include "d.h"

#include <map>
#include <vector>
#include <stack> 
#include <string>

class S_Bditer : public S_Bd
{
private:
protected:
    S_Bd * bd;
    S_D * d;
public:
    S_Bditer();
    S_Bditer(S_Bd* bd, S_D* d);
    virtual void staticAnalysis(std::map< std::string, Variable > & memId, std::stack<std::string> &log);
    virtual ~S_Bditer();
    virtual std::string print() const;
    S_Bd * next() {return bd;};
};

#endif // S_BDITER_H
