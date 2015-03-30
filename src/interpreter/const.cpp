// ---------------------------------------------
//  const.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include "const.h"
#include "operationException.h"
#include "utils.h"

// Const constructor
Const::Const(std::string constName, double val) : Declaration(val)
{
	this->name = constName;
	this->type = KEYWORD_CONST;
}

Const::~Const()
{

}

void Const::setValue(double val)
{

}
