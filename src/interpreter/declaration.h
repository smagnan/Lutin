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
 
class Declaration
{
private:
protected:
	double value;
public:
    Declaration();
    virtual ~Declaration();
    double getValue() {return this->value;};
    virtual void setValue(double val) {};
};
 
#endif