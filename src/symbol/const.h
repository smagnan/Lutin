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
#include "symbol.h"

class S_Const : public Symbol
{
private:
protected:
    S_Const(Symbols s);
public:
    S_Const();
    virtual ~S_Const();
    virtual std::string print();
};

#endif // S_CONST_H
