// ---------------------------------------------
//  f.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_F_H
#define S_F_H

#include "symbol.h"

class S_F : public Symbol
{
private:
protected:
public:
    S_F();
    virtual ~S_F();
    virtual std::string print() const;
};

#endif // S_F_H
