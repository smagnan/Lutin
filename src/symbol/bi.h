// ---------------------------------------------
//  bi.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_BI_H
#define S_BI_H

#include "symbol.h"

#include <map>
#include <vector>
#include <stack> 
#include <string>

class S_Bi : public Symbol
{
private:
protected:
public:
    S_Bi();
    virtual ~S_Bi();
    virtual void staticAnalysis(std::map< std::string, Variable > & memId, std::stack<std::string> &log);
    virtual std::string print() const;
};

#endif // S_BI_H
