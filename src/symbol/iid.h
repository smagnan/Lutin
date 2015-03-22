// ---------------------------------------------
//  iid.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_IID_H
#define S_IID_H

#include <string>
#include "i.h"

// Rule include :
#include "id.h"

class S_Iid : public S_I
{
private:
protected:
    S_Id * id;
public:
    S_Iid(S_Id * id);
    virtual ~S_Iid();
};

#endif // S_IID_H
