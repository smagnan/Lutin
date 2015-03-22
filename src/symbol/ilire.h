// ---------------------------------------------
//  ilire.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_ILIRE_H
#define S_ILIRE_H

#include <string>
#include "i.h"

// Rule include :
#include "read.h"

class S_Ilire : public S_I
{
private:
protected:
    S_Read * read;
public:
    S_Ilire(S_Read* read);
    virtual ~S_Ilire();
};

#endif // S_ILIRE_H
