// ---------------------------------------------
//  id.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef S_ID_H
#define S_ID_H

#include "f.h"

class S_Id : public S_F
{
private:
    std::string value;
protected:
public:
    S_Id();
    S_Id(std::string v);
    virtual ~S_Id();
    std::string getValue();
    void setValue(std::string v);
    virtual std::string print() const;
    virtual double eval(Interpreter& interpreter);
    virtual double eval();
};

#endif // S_ID_H
