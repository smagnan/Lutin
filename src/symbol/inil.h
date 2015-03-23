// ---------------------------------------------
//  inil.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_INIL_H
#define S_INIL_H

#include "symbol.h"

class S_Inil : public Symbol
{
private:
protected:
public:
    S_Inil();
    virtual ~S_Inil();
    virtual std::string print();
};

#endif // S_INIL_H
