// ---------------------------------------------
//  p.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_P_H
#define S_P_H

#include "symbol.h"

// Rule include :
#include "bd.h"
#include "bi.h"

class S_P : public Symbol
{
private:
protected:
    S_Bd * bd;
    S_Bi * bi;
public:
    S_P(S_Bd* bd,S_Bi* bi);
    virtual ~S_P();
    virtual std::string print() const;
    void optimize();
    virtual void staticAnalysis(std::map< std::string, Variable > & memId, std::stack<std::string> &log);
    S_Bd* get_S_Bd(){return bd;};
    S_Bi* get_S_Bi(){return bi;};
};

#endif // S_P_H
