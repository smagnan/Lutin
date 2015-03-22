// ---------------------------------------------
//  fnum.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_FNUM_H
#define S_FNUM_H

#include <string>
#include "f.h"

// Rule include :
#include "num.h"

class S_Fnum : public S_F
{
private:
protected:
    S_Num * num;
public:
    S_Fnum(S_Num* num);
    virtual ~S_Fnum();
};

#endif // S_FNUM_H
