// ---------------------------------------------
//  edivide.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EDIVIDE_H
#define S_EDIVIDE_H

#include <string>
#include "ebin.h"

class S_Edivide : public S_Ebin
{
private:
protected:
    S_Edivide(Symbols s);
public:
    S_Edivide();
    virtual ~S_Edivide();
};

#endif // S_EDIVIDE_H
