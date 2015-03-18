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

const std::string DECLAR_TYPE_VAR = 	"Var";
const std::string DECLAR_TYPE_CONST = 	"Const";
const std::string DECLAR_TYPE_VALUE = 	"Value";
 
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
	virtual double getValue() {return this->value;};
	std::string getType() {return this->type;};
	virtual void setValue(double val) = 0;
};
 
#endif
