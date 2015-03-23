// ---------------------------------------------
//  dconst.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_DCONST_H
#define S_DCONST_H

#include <string>
#include "d.h"

// Rule include :
#include "ini.h"
#include "inil.h"

class S_Dconst : public S_D
{
private:
protected:
    S_Ini* ini;
    S_Inil* inil;
public:
    S_Dconst(S_Ini* ini, S_Inil* inil);
    virtual ~S_Dconst();
    virtual std::string print();
};

#endif // S_DCONST_H
