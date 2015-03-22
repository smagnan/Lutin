// ---------------------------------------------
//  idliter.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_IDLITER_H
#define S_IDLITER_H

#include <string>
#include "idl.h"

class S_Idliter : public S_Idl
{
private:
protected:
    S_Idl * idl;
public:
    S_Idliter(S_Idl* idl);
    virtual ~S_Idliter();
};

#endif // S_IDLITER_H
