// ---------------------------------------------
//  inil.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_INIL_H
#define S_INIL_H

#include <string>
#include "symbol.h"
// RB
#include "vir.h"
#include "ini.h"

class S_Inil : public Symbol
{
private:
protected:
    S_Inil(Symbols s);
    // RB
    S_Inil * inil;
    S_Vir * vir;
    S_Ini * ini;
public:
    S_Inil();
    S_Inil(S_Inil*,S_Vir*, S_Ini*);
    virtual ~S_Inil();
};

#endif // S_INIL_H
