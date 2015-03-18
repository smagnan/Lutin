// ---------------------------------------------
//  read.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_READ_H
#define S_READ_H

#include "symbol.h"

class S_Read : public Symbol
{
private:
protected:
    S_Read(Symbols s);
public:
    S_Read();
    virtual ~S_Read();
};

#endif // S_READ_H
