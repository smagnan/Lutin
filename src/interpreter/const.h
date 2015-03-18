// ---------------------------------------------
//  const.h
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#ifndef CONST_H
#define CONST_H

#include "declaration.h"
 
class Const : public Declaration
{
    private:
    protected:
    public:
	Const(std::string constName, double val);
	virtual ~Const();
	virtual void setValue(double val);
};
 
#endif
