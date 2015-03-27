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
#include "../debugger.h"
#include "../symbol/bi.h"
#include "../symbol/biiter.h"
#include "../symbol/i.h"
#include "../symbol/bd.h"
#include "../symbol/bditer.h"
#include "../symbol/d.h"
#include "../symbol/p.h"
#include "../symbol/iaff.h"
#include "../symbol/iecrire.h"
#include "../symbol/ilire.h"
#include "../symbol/dconst.h"
#include "../symbol/dvar.h"
#include "../symbol/id.h"	// TODO useful?
#include "../symbol/ini.h"	// TODO useful?

// Interpreter constructor
Interpreter::Interpreter(Symbol* tree) 
{
	this->symbol_tree = tree;
}

Interpreter::~Interpreter()
{
	clean_declarations();
	clean_instructions();
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

void Interpreter::load_declarations()
{
	S_Bd * current = (static_cast<S_P*>(this->symbol_tree))->get_S_Bd();
	S_Bd * next;
	if (current == NULL || current->next() == NULL) // if NULL or Bd and not Bditer
		return; // TODO ?
	next = current;
	S_D * curr_declar;
	S_Dconst * d_const;
	S_Dvar * d_var;
	do
	{
		current = next;
		curr_declar = static_cast<S_D*>((static_cast<S_Bditer*>(current))->get_declaration());
		d_const = dynamic_cast<S_Dconst*> (curr_declar);
		if (d_const ==  NULL)
		{
			d_var = dynamic_cast<S_Dvar*> (curr_declar);
			if (d_var ==  NULL)
			{
				// TODO ERROR
			}	
			else //  ------ var
			{
				declare(d_var->get_id()->getValue());
			}
		}
		else // ----------- const
		{
			declare(d_const->get_ini()->getId(),D_CONST,d_const->get_ini()->getNum());
		}
		next = current->next();
	}
	while(next != NULL);
}

void Interpreter::load_instructions()
{
	S_Bi * current = (static_cast<S_P*>(this->symbol_tree))->get_S_Bi();
	S_Bi * next;
	if (current == NULL || current->next() == NULL) // if NULL or Bi and not Biiter
		return; // TODO ?
	next = current;
	S_I * curr_instruction;
	S_Iecrire* i_write;
	S_Ilire* i_read;
	S_Iaff* i_aff;
	do
	{
		current = next;
		curr_instruction = (static_cast<S_Biiter*>(current))->get_instruction();
		// (: thx:  http://stackoverflow.com/questions/351845/finding-the-type-of-an-object-in-c
		i_write = dynamic_cast<S_Iecrire*> (curr_instruction);
		if (i_write ==  NULL)
		{
			i_read = dynamic_cast<S_Ilire*> (curr_instruction);
			if (i_read ==  NULL)
			{
				i_aff = dynamic_cast<S_Iaff*> (curr_instruction);
				if (i_aff ==  NULL)
				{
					// TODO ERROR
				}
				else // --- aff
				{
					Affectation * affect = new Affectation();
					affect->setAttributes(i_aff->get_id(),i_aff->expression());
					this->instructions.push(affect);
				}
			}	
			else //  ------ read
			{
				Read * rd = new Read();
				rd->setAttributes(i_read->get_id());
				this->instructions.push(rd);
			}
		}
		else // ----------- write
		{
			Write * wr = new Write();
			wr->setAttributes(i_write->expression());
			this->instructions.push(wr);
		}
		next = current->next();
	}
	while(next != NULL);
}

void Interpreter::run()
{
	while(!instructions.empty())
	{
		try 
		{
			instructions.front()->execute(*this);
			delete instructions.front(); // TODO ok? 
			instructions.pop();
		}
		catch(std::exception &e) 
		{
			this->printer.printerr("Runtime problem ","problem with ...");
			// TODO: add instruction causing the problem
		}
	}
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
		this->printer.printerr("Multiple definition","");
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
	// TODO print instructions
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

Var * Interpreter::get_variable(std::string id)
{
	Declaration * decl;
	try 
	{
		decl = this->declarations.find(id)->second;
		if (decl->getType().compare(KEYWORD_VAR))
		{
			return static_cast<Var*>(decl);
		}
		else // TODO error if not VAR ?
		{	
			this->printer.printerr("Not a VAR ","problem with ...");
			return NULL;
		}
	} 
	catch(std::exception &e) 
	{
		this->printer.printerr("No such id ","problem with ...");
		// TODO: error if: name does not exist so can't get value
	}
	return NULL; // TODO const or equiv.
}