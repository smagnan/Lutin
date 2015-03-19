// ---------------------------------------------
//  t.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_T_H
#define S_T_H

#include <string>
#include "symbol.h"
// RB
#include "f.h"
#include "mult.h"
#include "divide.h"

class S_T : public Symbol
{
private:
protected:
    S_T(Symbols s);
    // RB
    S_T * t;
    S_Mult * mult;
    S_Divide * divide;
    S_F * f;
public:
    S_T();
    // RB
    S_T(S_T*, S_Mult*, S_F*);
    S_T(S_T*, S_Divide*, S_F*);
    S_T(S_F*);
    virtual ~S_T();
};

#endif // S_T_H
