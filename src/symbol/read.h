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
public:
    S_Read();
    virtual ~S_Read();
    virtual std::string print();
};

#endif // S_READ_H
