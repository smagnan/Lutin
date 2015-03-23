// ---------------------------------------------
//  openby.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_OPENBY_H
#define S_OPENBY_H

#include <string>
#include "symbol.h"

class S_Openby : public Symbol
{
private:
protected:
    S_Openby(Symbols s);
public:
    S_Openby();
    virtual ~S_Openby();
    virtual std::string print();
};

#endif // S_OPENBY_H
