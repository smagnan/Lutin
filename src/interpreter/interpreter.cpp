// ---------------------------------------------
//  interpreter.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include <exception>
#include "../exception/operationException.h"
#include "interpreter.h"
#include "../utils.h"

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
	/*while(!instructions.empty())
	{
		try 
		{
			instructions.front()->execute();
			delete instructions.front(); // TODO ok? 
			instructions.pop();
		}
		catch(std::exception &e) 
		{
		this->printer.printerr("Runtime problem ","problem with ...");
		// TODO: add instruction causing the problem
		}
	}*/
	//TODO: not usefull?
}

void Interpreter::declare(const std::string &name, Declar_Type type, double val) // TODO: exceptions
{							// default value for VALUE type
	if (this->declarations.find(name) == this->declarations.end()) 
	{ // If key not found
		switch(type) 
		{
			case D_VAR:
				this->declarations.insert(std::make_pair(name , new Var(name,val)));
				break;
			case D_CONST:
				this->declarations.insert(std::make_pair(name , new Const(name,val)));
				break;
			case D_VALUE:
				this->declarations.insert(std::make_pair(name , new Value(val)));
				break;
		}
	}
	else 
	{
		// this->printer.printerr("")
		// TODO error, already exists
		// ERROR: Multiple definition
	}
}

void Interpreter::declare(const std::string &name)
{
	if (this->declarations.find(name) == this->declarations.end()) 
	{
		this->declarations.insert(std::make_pair(name , new Var(name)));
	}
	else 
	{
		this->printer.printerr("Declaration problem ","multiple definition of "+name);
		// TODO error, already exists
		// ERROR: Multiple definition
	}
}

void Interpreter::update_variable(std::string name, double val)
{
	try 
	{
		Declaration * decl = this->declarations.find(name)->second;
		if(!decl->getType().compare(KEYWORD_VAR)) 
		{ // if type is VAR
			decl->setValue(val);
		} 
		else 
		{
			//throw new OperationException(OperationException::SETCONST + Utils::doubleToString(val));
			// TODO ^ FIXME & ugly
		}

	} 
	catch(std::exception &e) 
	{
		this->printer.printerr("Affectation problem ","problem with ...");
		// TODO: error if: name does not exist, exist but not a variable etc ...
		// TODO: create custom exceptions
		// TODO: calling setValue() if not a Var throws an error
		// TODO print what causes the error and the "what"
	}
}

void Interpreter::print_declarations(std::ostream& out)
{
	typedef std::map<std::string, Declaration* >::iterator it_t;
	for(it_t iterator = this->declarations.begin(); iterator != this->declarations.end(); iterator++) 
	{
	    // TODO: this is ugly
	    this->printer.print(out,iterator->second->getType());
	    this->printer.print(out,iterator->first);
	    this->printer.print(out,"=");
	    try 
	    {
	    	this->printer.print(out,iterator->second->getValue());
	    } 
	    catch(NoInitException &e) 
	    {
	    	this->printer.print(out,e.what()); // TODO fix
	    }
	    this->printer.endline();
	}
}

void Interpreter::print_instructions(std::ostream& out)
{
	// TODO
	this->printer.print(out,"");
}

double Interpreter::get_value(std::string id)
{
	try 
	{
		return this->declarations.find(id)->second->getValue();

	} 
	catch(std::exception &e) 
	{
		this->printer.printerr("No such id ","problem with ...");
		// TODO: error if: name does not exist so can't get value
	}
	return 0; // TODO const or equiv.
}

void Interpreter::clean_declarations() // TODO: exceptions
{
	typedef std::map<std::string, Declaration* >::iterator it_t;
	for(it_t iterator = this->declarations.begin(); iterator != this->declarations.end(); iterator++) 
	{
	    delete iterator->second;
	}
}

void Interpreter::clean_instructions() // TODO: exceptions
{
	while (!this->instructions.empty()) 
	{
		delete this->instructions.front();
		this->instructions.pop();
	}
}
