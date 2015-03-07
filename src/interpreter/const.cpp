// ---------------------------------------------
//  const.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include "const.h"

// Const constructor
Const::Const(std::string constName, double val) : Declaration(val)
{
	this->name = constName;
	this->type = "Const";
}

Const::~Const()
{

}