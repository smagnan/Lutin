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

void Interpreter::declare(std::string name, Declar_Type type, double val)
{
	if (this->declarations.find(name) == this->declarations.end()) { // If key not found
		switch(type) {
			case VAR:
				this->declarations.insert(std::make_pair(name , new Var()));
				break;
			case CONST:
				this->declarations.insert(std::make_pair(name , new Const()));
				break;
			case VALUE:
				this->declarations.insert(std::make_pair(name , new Value()));
				break;
		}
	}
	else {
		// TODO error, already exists
		// ERROR: Multiple definition
	}
}

void Interpreter::clean_declarations()
{
	typedef std::map<std::string, Declaration* >::iterator it_t;
	for(it_t iterator = this->declarations.begin(); iterator != this->declarations.end(); iterator++) {
	    delete iterator->second;
	}
}

void Interpreter::clean_instructions()
{
	while (!this->instructions.empty()) {
		delete this->instructions.front();
		this->instructions.pop();
	}
}