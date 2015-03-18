// ---------------------------------------------
//  exprminus.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EXPRMINUS_H
#define S_EXPRMINUS_H

#include "exprbin.h"

class S_Exprminus : public S_Exprbin
{
private:
protected:
    S_Exprminus(Symbols s);
public:
    S_Exprminus();
    virtual ~S_Exprminus();
};

#endif // S_EXPRMINUS_H
