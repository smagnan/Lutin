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
    Bd sbd;
    Bi sbi;
public:
    S_P();
    S_P(Bd s_bd, Bi, s_bi);
    virtual ~S_P();
};

#endif // S_P_H
