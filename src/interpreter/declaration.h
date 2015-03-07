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
	std::string type;
	double value;
public:
    Declaration(double val);
    virtual ~Declaration();
    double getValue() {return this->value;};
    std::string getType() {return this->type;};
    virtual void setValue(double val) {};
};
 
#endif