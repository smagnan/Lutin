// ---------------------------------------------
//  ebin.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_EBIN_H
#define S_EBIN_H

#include "e.h"

// Rule include :
#include "t.h"

class S_Ebin : public S_E
{
private:
protected:
    S_Ebin();
    S_E * e;
    S_T * t;
    
public:
    S_Ebin(S_E* e, S_T* t);
    virtual ~S_Ebin();
    virtual std::string print();
};

#endif // S_EBIN_H
