// ---------------------------------------------
//  var.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include "var.h"

// Var constructors
Var::Var(std::string varName) : Declaration(DEFAULT_INIT_VAL)
{
	this->name = varName;
	this->type = "Var";
	this->affected = false;
}

Var::Var(std::string varName, double val) : Declaration(val)
{
	this->name = varName;
	this->type = "Var";
	this->affected = true;
}

Var::~Var()
{

}

void Var::setValue(double val)
{
	this->affected = true;
	this->value = val; // TODO some checks ?
}

double Var::getValue() 
{
	if(this->affected) {
		return this->value;
	} 
	throw noInitEx;	
}