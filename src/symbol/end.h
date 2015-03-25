// ---------------------------------------------
//  end.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_END_H
#define S_END_H

#include "symbol.h"

class S_End : public Symbol
{
private:
protected:
public:
    S_End();
    virtual ~S_End();
    virtual std::string print() const;
};

#endif // S_END_H
