// ---------------------------------------------
//  t.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_T_H
#define S_T_H

#include "symbol.h"

class S_T : public Symbol
{
private:
protected:
public:
    S_T();
    virtual ~S_T();
    virtual std::string print() const;
};

#endif // S_T_H
