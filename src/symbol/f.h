// ---------------------------------------------
//  f.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_F_H
#define S_F_H

#include <string>
#include "symbol.h"
/*
#include "openby.h"
#include "closeby.h"
#include "e.h"
#include "id.h"
#include "num.h"
*/
class S_F : public Symbol
{
private:
protected:
    S_F(Symbols s);
    /*
    // RB
    S_Openby * openby;
    S_E * e;
    S_Closeby * closeby;
    S_Id * id;
    S_Num * num;
    */
public:
    S_F();
    /*S_F(S_Openby*, S_E*, S_Closeby*);
    S_F(S_Id*);
    S_F(S_Num*);*/
    virtual ~S_F();
};

#endif // S_F_H
