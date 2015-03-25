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
#include "../symbol/id.h"
#include "../symbol/eprime.h"
 
class Affectation : public Instruction
{
private:
	Var * variable;
	double var_value;
	S_Id * id;
	S_Eprime * expr;
protected:
public:
    Affectation();
    virtual ~Affectation();
    int execute(Interpreter & interpreter);
    void setAttributes(Var * var, S_Eprime * ex);
};
 
#endif