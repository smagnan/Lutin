// ---------------------------------------------
//  value.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 07/03/2015
//
// ---------------------------------------------

#include <sstream>

#include "value.h"

// Value constructor
Value::Value(double val) : Declaration(val)
{
	std::ostringstream strs;
	strs << this->value;
	this->name = strs.str(); // the name is equivalent to the value
}

Value::~Value()
{

}