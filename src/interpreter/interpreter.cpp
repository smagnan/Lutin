// ---------------------------------------------
//  interpreter.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include "interpreter.h"

// Interpreter constructor
Interpreter::Interpreter() 
{

}

Interpreter::~Interpreter()
{

}

void Interpreter::run()
{

}

void Interpreter::declare(std::string name, Declar_Type type, double value)
{
	if (this->declarations.find(name) == this->declarations.end()) {
	  this->declarations.insert(std::make_pair(name , new Const() ));
	}
	else {
	  // TODO error, already exists
	}
}