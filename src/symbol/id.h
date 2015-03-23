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
#include "symbol.h"

class S_Id : public Symbol
{
private:
    std::string value;
protected:
    S_Id(Symbols s);
public:
    S_Id();
    S_Id(std::string v);
    virtual ~S_Id();
    std::string getValue();
    void setValue(std::string v);
    virtual std::string print();
};

#endif // S_ID_H
