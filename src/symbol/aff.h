// ---------------------------------------------
//  aff.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_AFF_H
#define S_AFF_H

#include "symbol.h"

class S_Aff : public Symbol
{
private:
protected:
public:
    S_Aff();
    virtual ~S_Aff();
    virtual std::string print() const;
};

#endif // S_AFF_H
