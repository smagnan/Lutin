// ---------------------------------------------
//  ini.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_INI_H
#define S_INI_H

#include <string>
#include "symbol.h"
// RB 
#include "id.h"
#include "eq.h"
#include "num.h"

class S_Ini : public Symbol
{
private:
protected:
    S_Ini(Symbols s);

    // RB
    S_Id * id;
    S_Eq * eq;
    S_Num * num;
public:
    S_Ini();
    // RB
    S_Ini(S_Id*, S_Eq*, S_Num*);
    virtual ~S_Ini();
};

#endif // S_INI_H
