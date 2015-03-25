// ---------------------------------------------
//  affectation.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include "affectation.h"

// Affectation constructor
Affectation::Affectation() 
{

}

Affectation::~Affectation()
{

}

int Affectation::execute(Interpreter & interpreter)
{
	if (attributes_set)
		return EXEC_RET_NOTSET;
	try 
	{
		// XXX code exec here
		this->var_value = this->expr->eval(interpreter);
		this->variable->setValue(this->var_value);
	}
	catch(std::exception &e) 
	{
		return EXEC_RET_ERROR;
	}
	return EXEC_RET_OK;
}

void Affectation::setAttributes(Var * var, S_Eprime * ex)
{
	variable = var;
	this->expr = ex;
}