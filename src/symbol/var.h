// ---------------------------------------------
//  var.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_VAR_H
#define S_VAR_H

#include <string>
#include "symbol.h"

class S_Var : public Symbol
{
private:
protected:
    S_Var(Symbols s);
public:
    S_Var();
    virtual ~S_Var();
    virtual std::string print();
};

#endif // S_VAR_H
