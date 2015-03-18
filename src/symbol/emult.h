// ---------------------------------------------
//  emult.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EMULT_H
#define S_EMULT_H

#include <string>
#include "ebin.h"

class S_Emult : public S_Ebin
{
private:
protected:
    S_Emult(Symbols s);
public:
    S_Emult();
    virtual ~S_Emult();
};

#endif // S_EMULT_H
