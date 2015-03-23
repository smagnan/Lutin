// ---------------------------------------------
//  iecrire.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_IECRIRE_H
#define S_IECRIRE_H

#include <string>
#include "i.h"

// Rule include :
#include "eprime.h"

class S_Iecrire : public S_I
{
private:
protected:
    S_Eprime * eprime;
public:
    S_Iecrire(S_Eprime* eprime);
    virtual ~S_Iecrire();
};

#endif // S_IECRIRE_H
