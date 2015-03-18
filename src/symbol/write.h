// ---------------------------------------------
//  write.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_WRITE_H
#define S_WRITE_H

#include <string>
#include "symbol.h"

class S_Write : public Symbol
{
private:
protected:
    S_Write(Symbols s);
public:
    S_Write();
    virtual ~S_Write();
};

#endif // S_WRITE_H
