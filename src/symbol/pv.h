// ---------------------------------------------
//  pv.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_PV_H
#define S_PV_H

#include <string>
#include "symbol.h"

class S_Pv : public Symbol
{
private:
protected:
    S_Pv(Symbols s);
public:
    S_Pv();
    virtual ~S_Pv();
    virtual std::string print();
};

#endif // S_PV_H
