// ---------------------------------------------
//  value.h
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 07/03/2015
//
// ---------------------------------------------

#ifndef VALUE_H
#define VALUE_H

#include "declaration.h"
 
class Value : public Declaration
{
private:
protected:
public:
    Value(double val);
    virtual ~Value();
};
 
#endif