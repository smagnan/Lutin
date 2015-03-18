// ---------------------------------------------
//  id.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_ID_H
#define S_ID_H

#include <string>
#include "expr.h"

class S_Id : public S_Expr
{
private:
    std::string value;
protected:
    S_Id(Symbols s);
public:
    S_Id();
    virtual ~S_Id();
    std::string getValue();
    void setValue(std::string v);
};

#endif // S_ID_H
