// ---------------------------------------------
//  idl.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_IDL_H
#define S_IDL_H

#include <string>
#include "symbol.h"
// RB
#include "vir.h"
#include "id.h"

class S_Idl : public Symbol
{
private:
protected:
    S_Idl(Symbols s);
    // RB
    S_Idl * idl;
    S_Vir * vir;
    S_Id * id;
public:
    S_Idl();
    // RB
    S_Idl(S_Idl*, S_Vir*, S_Id*);
    virtual ~S_Idl();
};

#endif // S_IDL_H
