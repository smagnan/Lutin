// ---------------------------------------------
//  plus.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_PLUS_H
#define S_PLUS_H

#include "symbol.h"

class S_Plus : public Symbol
{
private:
protected:
public:
    S_Plus();
    virtual ~S_Plus();
    virtual std::string print() const;
};

#endif // S_PLUS_H
