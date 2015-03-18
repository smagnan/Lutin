// ---------------------------------------------
//  exprmult.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EXPRMULT_H
#define S_EXPRMULT_H

#include "exprbin.h"

class S_Exprmult : public S_Exprbin
{
private:
protected:
    S_Exprmult(Symbols s);
public:
    S_Exprmult();
    virtual ~S_Exprmult();
};

#endif // S_EXPRMULT_H
