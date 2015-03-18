// ---------------------------------------------
//  exprplus.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EXPRPLUS_H
#define S_EXPRPLUS_H

#include <string>
#include "exprbin.h"

class S_Exprplus : public S_Exprbin
{
private:
protected:
    S_Exprplus(Symbols s);
public:
    S_Exprplus();
    virtual ~S_Exprplus();
};

#endif // S_EXPRPLUS_H
