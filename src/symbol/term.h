// ---------------------------------------------
//  term.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_TERM_H
#define S_TERM_H

#include "symbol.h"

class S_Term : public Symbol
{
private:
protected:
    S_Term(Symbols s);
public:
    S_Term();
    virtual ~S_Term();
};

#endif // S_TERM_H
