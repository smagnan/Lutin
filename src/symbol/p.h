// ---------------------------------------------
//  p.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_P_H
#define S_P_H

#include "symbol.h"

// Rule include :
#include "bd.h"
#include "bi.h"

class S_P : public Symbol
{
private:
protected:
    S_Bd * bd;
    S_Bi * bi;
public:
    S_P(S_Bd* bd,S_Bi* bi);
    virtual ~S_P();
    virtual std::string print() const;
};

#endif // S_P_H
