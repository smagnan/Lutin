// ---------------------------------------------
//  ebin.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EBIN_H
#define S_EBIN_H

#include <string>
#include "e.h"

class S_Ebin : public S_E
{
private:
protected:
    S_Ebin(Symbols s);
public:
    S_Ebin();
    virtual ~S_Ebin();
};

#endif // S_EBIN_H
