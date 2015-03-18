// ---------------------------------------------
//  ini.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_INI_H
#define S_INI_H

#include <string>
#include "symbol.h"

class S_Ini : public Symbol
{
private:
protected:
    S_Ini(Symbols s);
public:
    S_Ini();
    virtual ~S_Ini();
};

#endif // S_INI_H
