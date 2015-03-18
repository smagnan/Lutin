// ---------------------------------------------
//  eplus.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EPLUS_H
#define S_EPLUS_H

#include <string>
#include "ebin.h"

class S_Eplus : public S_Ebin
{
private:
protected:
    S_Eplus(Symbols s);
public:
    S_Eplus();
    virtual ~S_Eplus();
};

#endif // S_EPLUS_H
