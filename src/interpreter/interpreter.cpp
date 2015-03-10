// ---------------------------------------------
//  interpreter.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include <exception>

#include "interpreter.h"

// Interpreter constructor
Interpreter::Interpreter() 
{

}

Interpreter::~Interpreter()
{
	clean_declarations();
	clean_instructions();
}

void Interpreter::run()
{

}

void Interpreter::declare(const std::string &name, Declar_Type type, double val) // TODO: exceptions
{							// default value for VALUE type
	if (this->declarations.find(name) == this->declarations.end()) { // If key not found
		switch(type) {
			case VAR:
				this->declarations.insert(std::make_pair(name , new Var(name,val)));
				break;
			case CONST:
				this->declarations.insert(std::make_pair(name , new Const(name,val)));
				break;
			case VALUE:
				this->declarations.insert(std::make_pair(name , new Value(val)));
				break;
		}
	}
	else {
		// this->printer.printerr("")
		// TODO error, already exists
		// ERROR: Multiple definition
	}
}

void Interpreter::update_variable(std::string name, double val)
{
	try {
		this->declarations.find(name)->second->setValue(val);
	} catch(std::exception &e) {
		// TODO: error if: name does not exist, exist but not a variable etc ...
		// TODO: create custom exceptions
		// TODO: calling setValue() if not a Var throws an error
	}
}

void Interpreter::print_declarations()
{
	typedef std::map<std::string, Declaration* >::iterator it_t;
	for(it_t iterator = this->declarations.begin(); iterator != this->declarations.end(); iterator++) {
	    // TODO: this is ugly
	    this->printer.print(iterator->second->getType());
	    this->printer.print(iterator->first);
	    this->printer.print("=");
	    this->printer.print(iterator->second->getValue());
	    this->printer.endline();
	}
}

void Interpreter::print_instructions()
{
	// TODO
}

void Interpreter::clean_declarations() // TODO: exceptions
{
	typedef std::map<std::string, Declaration* >::iterator it_t;
	for(it_t iterator = this->declarations.begin(); iterator != this->declarations.end(); iterator++) {
	    delete iterator->second;
	}
}

void Interpreter::clean_instructions() // TODO: exceptions
{
	while (!this->instructions.empty()) {
		delete this->instructions.front();
		this->instructions.pop();
	}
}