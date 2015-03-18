// ---------------------------------------------
//  eminus.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EMINUS_H
#define S_EMINUS_H

#include <string>
#include "ebin.h"

class S_Eminus : public S_Ebin
{
private:
protected:
    S_Eminus(Symbols s);
public:
    S_Eminus();
    virtual ~S_Eminus();
};

#endif // S_EMINUS_H
