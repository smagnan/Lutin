// ---------------------------------------------
//  var.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_VAR_H
#define S_VAR_H

#include "symbol.h"

class S_Var : public Symbol
{
private:
protected:
public:
    S_Var();
    virtual ~S_Var();
    virtual std::string print();
};

#endif // S_VAR_H
