// ---------------------------------------------
//  vir.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_VIR_H
#define S_VIR_H

#include "symbol.h"

class S_Vir : public Symbol
{
private:
protected:
public:
    S_Vir();
    virtual ~S_Vir();
    virtual std::string print();
};

#endif // S_VIR_H
