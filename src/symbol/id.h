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
#include "e.h"

class S_Id : public S_E
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
};

#endif // S_ID_H
