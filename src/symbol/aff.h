// ---------------------------------------------
//  aff.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_AFF_H
#define S_AFF_H

#include <string>
#include "symbol.h"

class S_Aff : public Symbol
{
private:
protected:
    S_Aff(Symbols s);
public:
    S_Aff();
    virtual ~S_Aff();
    virtual std::string print();
};

#endif // S_AFF_H
