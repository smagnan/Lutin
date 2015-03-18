// ---------------------------------------------
//  value.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 07/03/2015
//
// ---------------------------------------------

#include "value.h"
#include "operationException.h"
#include "utils.h"

// Value constructor
Value::Value(double val) : Declaration(val)
{
	// the name is equivalent to the value
	this->name = Utils::doubleToString(this->value);
	this->type = "Value";
}

Value::~Value()
{

}

void Value::setValue(double val)
{
	throw new OperationException(OperationException::SETCONST + Utils::doubleToString(val));
}
