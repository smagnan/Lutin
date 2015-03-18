// ---------------------------------------------
//  id.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_ID_H
#define S_ID_H

#include "expr.h"

class S_Id : public S_Expr
{
private:
protected:
    S_Id(Symbols s);
public:
    S_Id();
    virtual ~S_Id();
};

#endif // S_ID_H
