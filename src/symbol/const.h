// ---------------------------------------------
//  const.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_CONST_H
#define S_CONST_H

#include <string>
#include "e.h"

class S_Const : public S_E
{
private:
protected:
    S_Const(Symbols s);
public:
    S_Const();
    virtual ~S_Const();
};

#endif // S_CONST_H
