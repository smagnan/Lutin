// ---------------------------------------------
//  iniliter.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_INILITER_H
#define S_INILITER_H

#include "inil.h"

// Rule include :
#include "ini.h"

class S_Iniliter : public S_Inil
{
private:
protected:
    S_Inil * inil;
    S_Ini * ini;
public:
    S_Iniliter(S_Inil* inil, S_Ini* ini);
    virtual ~S_Iniliter();
    virtual std::string print();
};

#endif // S_INILITER_H
