// ---------------------------------------------
//  ini.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_INI_H
#define S_INI_H

#include "symbol.h"

// Rule include :
#include "id.h"
#include "num.h"

#include <string>
#include <map>
#include <vector>
#include <stack>  

class S_Ini : public Symbol
{
private:
protected:
    S_Id * id;
    S_Num * num;
public:
    S_Ini(S_Id* id, S_Num* num);
    virtual void staticAnalysis(std::map< std::string, Variable > & memId, std::stack<std::string> &log);
    virtual ~S_Ini();
    virtual std::string print() const;
};

#endif // S_INI_H
