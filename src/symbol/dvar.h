// ---------------------------------------------
//  dvar.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_DVAR_H
#define S_DVAR_H

#include <string>
#include "d.h"

// Rule include :
#include "idl.h"

class S_Dvar : public S_D
{
private:
protected:
    S_Idl * idl;
public:
    S_Dvar(S_Idl* idl);
    virtual ~S_Dvar();
};

#endif // S_DVAR_H
