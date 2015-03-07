// ---------------------------------------------
//  var.h
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#ifndef VAR_H
#define VAR_H

#include "declaration.h"
 
class Var : public Declaration
{
private:
protected:
public:
    Var(std::string varName, double val);
    virtual ~Var();
    void setValue(double val);
};
 
#endif