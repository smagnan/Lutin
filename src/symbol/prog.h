// ---------------------------------------------
//  prog.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_PROG_H
#define S_PROG_H

#include <string>
#include "symbol.h"

class S_Prog : public Symbol
{
private:
protected:
    S_Prog(Symbols s);
public:
    S_Prog();
    virtual ~S_Prog();
};

#endif // S_PROG_H
