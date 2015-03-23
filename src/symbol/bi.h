// ---------------------------------------------
//  bi.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_BI_H
#define S_BI_H

#include <string>
#include "symbol.h"

class S_Bi : public Symbol
{
private:
protected:
public:
    S_Bi();
    virtual ~S_Bi();
    virtual std::string print();
};

#endif // S_BI_H
