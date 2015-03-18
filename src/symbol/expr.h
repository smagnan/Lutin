// ---------------------------------------------
//  expr.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EXPR_H
#define S_EXPR_H

#include "symbol.h"

class S_Expr : public Symbol
{
private:
protected:
    S_Expr(Symbols s);
public:
    S_Expr();
    virtual ~S_Expr();
};

#endif // S_EXPR_H
