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
#include <vector>

#include "symbol.h"

// Rule include :
#include "bd.h"
#include "bi.h"


class S_P : public Symbol
{
private:
protected:
    S_P(Symbols s);
    S_Bd sbd;
    S_Bi sbi;
public:
    S_P();
    S_P(vector<Symbol>);
    virtual ~S_P();
};

#endif // S_P_H
