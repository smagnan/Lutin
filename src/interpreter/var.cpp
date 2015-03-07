// ---------------------------------------------
//  var.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include "var.h"

// Var constructor
Var::Var(std::string varName, double val) : Declaration(val)
{
	this->name = varName;
}

Var::~Var()
{

}

void Var::setValue(double val)
{
	this->value = val; // TODO some checks ?
}