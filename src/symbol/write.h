// ---------------------------------------------
//  write.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_WRITE_H
#define S_WRITE_H

#include "symbol.h"

class S_Write : public Symbol
{
private:
protected:
public:
    S_Write();
    virtual ~S_Write();
    virtual std::string print() const;
};

#endif // S_WRITE_H
