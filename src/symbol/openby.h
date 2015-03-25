// ---------------------------------------------
//  openby.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_OPENBY_H
#define S_OPENBY_H

#include "symbol.h"

class S_Openby : public Symbol
{
private:
protected:
public:
    S_Openby();
    virtual ~S_Openby();
    virtual std::string print() const;
};

#endif // S_OPENBY_H
