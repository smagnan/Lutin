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

// Rule include :
#include "t.h"

class S_Eplus : public S_Ebin
{
private:
protected:
public:
    S_Eplus(S_E* e, S_T* t);
    virtual ~S_Eplus();
};

#endif // S_EPLUS_H
