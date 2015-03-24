// ---------------------------------------------
//  i.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_I_H
#define S_I_H

#include "symbol.h"

class S_I : public Symbol
{
private:
protected:
public:
    S_I();
    virtual ~S_I();
    virtual std::string print() const;
};

#endif // S_I_H
