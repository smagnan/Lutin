// ---------------------------------------------
//  bi.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_BI_H
#define S_BI_H

#include <string>
#include "symbol.h"

// Rule based includes
#include "i.h"
#include "pv.h" 

class S_Bi : public Symbol
{
private:
protected:
    S_Bi(Symbols s);

    // Rule based member var
    S_Bi * bi;
    S_I * i;
    S_Pv * pv;

public:
    S_Bi();
    
    // Rule based constructor
    S_Bi(S_Bi*, S_I*, S_Pv*);
    
    virtual ~S_Bi();
};

#endif // S_BI_H
