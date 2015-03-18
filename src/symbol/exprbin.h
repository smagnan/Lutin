// ---------------------------------------------
//  exprbin.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EXPRBIN_H
#define S_EXPRBIN_H

#include <string>
#include "expr.h"

class S_Exprbin : public S_Expr
{
private:
protected:
    S_Exprbin(Symbols s);
public:
    S_Exprbin();
    virtual ~S_Exprbin();
};

#endif // S_EXPRBIN_H
