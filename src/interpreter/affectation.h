// ---------------------------------------------
//  affectation.h
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#ifndef AFFECTATION_H
#define AFFECTATION_H
 
#include "instruction.h"
#include "var.h"
 
class Affectation : public Instruction
{
private:
	Var * variable;
	double var_value;
protected:
public:
    Affectation();
    virtual ~Affectation();
    int  execute();
    void setAttributes(Var * var, double value);
};
 
#endif