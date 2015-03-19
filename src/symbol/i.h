// ---------------------------------------------
//  i.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_I_H
#define S_I_H

#include <string>
#include "symbol.h"
// RB
#include "write.h"
#include "eprime.h"
#include "id.h"
#include "aff.h"
#include "read.h"

class S_I : public Symbol
{
private:
protected:
    S_I(Symbols s);
    // RB
    S_Write * write;
    S_Eprime * eprime;
    S_Id * id;
    S_Aff * aff;
    S_Read * read;
public:
    S_I();
    S_I(S_Write*, S_Eprime*);
    S_I(S_Id*, S_Aff*, S_Eprime*);
    S_I(S_Read*, S_Id*);
    virtual ~S_I();
};

#endif // S_I_H
