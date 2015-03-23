// ---------------------------------------------
//  bditer.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_BDITER_H
#define S_BDITER_H

#include "bd.h"

// Rule include :
#include "bd.h"
#include "d.h"

class S_Bditer : public S_Bd
{
private:
protected:
    S_Bd * bd;
    S_D * d;
public:
    S_Bditer();
    S_Bditer(S_Bd* bd, S_D* d);
    virtual ~S_Bditer();
    virtual std::string print();
};

#endif // S_BDITER_H
