// ---------------------------------------------
//  end.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_END_H
#define S_END_H

#include <string>
#include "symbol.h"

class S_End : public Symbol
{
private:
protected:
    S_End(Symbols s);
public:
    S_End();
    virtual ~S_End();
};

#endif // S_END_H
