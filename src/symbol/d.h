// ---------------------------------------------
//  d.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_D_H
#define S_D_H

#include <string>
#include "symbol.h"

// RB
#include "var.h"
#include "id.h"
#include "idl.h"
#include "const.h"
#include "ini.h"
#include "inil.h"

class S_D : public Symbol
{
private:
protected:
    S_D(Symbols s);

    // RB
    S_Var * var;
    S_Id * id;
    S_Idl * idl;
    S_Const * m_const;
    S_Ini * ini;
    S_Inil * inil;

public:
    S_D();
    // RB
    S_D(S_Var*, S_Id*, S_Idl*);
    S_D(S_Const*, S_Ini*, S_Inil*);
    virtual ~S_D();
};

#endif // S_D_H
