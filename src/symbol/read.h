// ---------------------------------------------
//  read.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_READ_H
#define S_READ_H

#include <string>
#include "symbol.h"

class S_Read : public Symbol
{
private:
protected:
    S_Read(Symbols s);
public:
    S_Read();
    virtual ~S_Read();
    virtual std::string print();
};

#endif // S_READ_H
