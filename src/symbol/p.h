// ---------------------------------------------
//  p.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_P_H
#define S_P_H

#include <string>
#include "symbol.h"

// Rule include :
#include "bd.h"
#include "bi.h"


class S_P : public Symbol
{
private:
protected:
    S_P(Symbols s);
    S_Bd * bd;
    S_Bi * bi;
public:
    S_P();
    S_P(S_Bd*,S_Bi*);
    virtual ~S_P();
};

#endif // S_P_H
