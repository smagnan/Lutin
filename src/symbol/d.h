// ---------------------------------------------
//  d.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_D_H
#define S_D_H

#include "symbol.h"

class S_D : public Symbol
{
private:
protected:
public:
    S_D();
    virtual ~S_D();
    virtual std::string print() const;
};

#endif // S_D_H
