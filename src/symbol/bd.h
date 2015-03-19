// ---------------------------------------------
//  bd.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_BD_H
#define S_BD_H

#include <string>
#include "symbol.h"

// RB
#include "d.h"
#include "pv.h"

class S_Bd : public Symbol
{
private:
protected:
    S_Bd(Symbols s);

    // RB
    S_Bd * bd;
    S_D * d;
    S_Pv * pv;

    
public:
    S_Bd();
    // RB
    S_Bd(S_Bd*, S_D*, S_Pv*);
    virtual ~S_Bd();
};

#endif // S_BD_H
