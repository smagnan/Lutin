// ---------------------------------------------
//  declaration.h
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#ifndef DECLARATION_H
#define DECLARATION_H

#include <string>
 
class Declaration
{
private:
protected:
	std::string name;
	double value;
public:
    Declaration(double val);
    virtual ~Declaration();
    double getValue() {return this->value;};
    virtual void setValue(double val) {};
};
 
#endif