// ---------------------------------------------
//  instr.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_INSTR_H
#define S_INSTR_H

#include <string>
#include "symbol.h"

class S_Instr : public Symbol
{
private:
protected:
    S_Instr(Symbols s);
public:
    S_Instr();
    virtual ~S_Instr();
};

#endif // S_INSTR_H
