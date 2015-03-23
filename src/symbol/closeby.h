// ---------------------------------------------
//  closeby.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_CLOSEBY_H
#define S_CLOSEBY_H

#include <string>
#include "symbol.h"

class S_Closeby : public Symbol
{
private:
protected:
    S_Closeby(Symbols s);
public:
    S_Closeby();
    virtual ~S_Closeby();
    virtual std::string print();
};

#endif // S_CLOSEBY_H
