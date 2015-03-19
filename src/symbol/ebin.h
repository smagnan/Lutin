// ---------------------------------------------
//  ebin.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EBIN_H
#define S_EBIN_H

#include <string>
#include "e.h"

class S_Ebin : public S_E
{
private:
protected:
    S_Ebin(Symbols s);
    S_E left_expr;
    S_E right_expr;
public:
    S_Ebin();
    virtual ~S_Ebin();
};

#endif // S_EBIN_H
