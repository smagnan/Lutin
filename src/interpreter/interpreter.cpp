// ---------------------------------------------
//  interpreter.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include <exception>
#include <stack>
#include <typeinfo>
#include <stdlib.h> 
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

void Interpreter::clean_instructions() // TODO: exceptions ... supposed to be useless?
{
	while (!this->instructions.empty()) 
	{
		delete this->instructions.top();
		this->instructions.pop();
	}
}

void Interpreter::load_declarations()
{
	DEBUGINFO("load_declarations: START");
	DEBUGWARN("load_declarations: 1");
	S_Bd * current = (static_cast<S_P*>(this->symbol_tree))->get_S_Bd();
	DEBUGWARN("load_declarations: 2");
	S_Bd * next;
	DEBUGWARN("load_declarations: 3");
	TRACE(current << std::endl)
	if (current == NULL || current->next() == NULL) // if NULL or Bd and not Bditer
	{
		DEBUGWARN("load_declarations: 3 ret");
		return; // TODO ?
	}
	DEBUGWARN("load_declarations: 5");
	next = current;
	S_D * curr_declar;
	S_Dconst * d_const;
	S_Dvar * d_var;
	S_Idl * var_idl;
	S_Inil * const_inil;
	std::string className;
	DEBUGWARN("load_declarations: 6");
	do
	{
		DEBUGWARN("    load_declarations: 7");
		current = next;
		curr_declar = static_cast<S_D*>((static_cast<S_Bditer*>(current))->get_declaration());
		TRACE("current                          : " << current << std::endl)
		TRACE("static_cast<S_Bditer*>(current)  : " << static_cast<S_Bditer*>(current) << std::endl)
		TRACE("_->get_declaration()             : " << (static_cast<S_Bditer*>(current))->get_declaration() << std::endl)
		TRACE("curr_declar                      : " << curr_declar << std::endl)
		className = typeid(*current).name(); 
		DEBUGINFO(className)
		if(!className.compare("4S_Bd")) // this means we reached the end of the branch: a Bd symbol (decorated name)
			break;
		DEBUGWARN("    load_declarations: 8");
		d_const = dynamic_cast<S_Dconst*> (curr_declar);
		DEBUGWARN("    load_declarations: 9");
		if (d_const ==  NULL)
		{
			DEBUGWARN("        load_declarations: 10");
			d_var = dynamic_cast<S_Dvar*> (curr_declar);
			DEBUGWARN("        load_declarations: 11");
			if (d_var ==  NULL)
			{
				// TODO ERROR
				DEBUGERR("            load_declarations: 12");
			}	
			else //  ------ var
			{
				DEBUGWARN("            load_declarations: 13");
				TRACE("Var id: " << d_var->get_id()->getValue() << std::endl)
				declare(d_var->get_id()->getValue());
				var_idl = d_var->get_idl();
				className = typeid(*var_idl).name(); 
				DEBUGINFO(className)
				if(className.compare("5S_Idl")) // end of the branch: a Idl symbol (decorated name)
				{	
					TRACE("Var idl 1: " << d_var->get_id()->getValue() << std::endl)
					while(var_idl != NULL)
					{
						declare(var_idl->get_id()->getValue());
						TRACE("Var idl n: " << var_idl->get_id() << std::endl)
						var_idl = var_idl->get_idl();
						className = typeid(*var_idl).name(); 
						DEBUGINFO(className)
						if(!className.compare("5S_Idl")) // end of the branch: a Idl symbol (decorated name)
							break;
					}
				}
				DEBUGWARN("            load_declarations: 14");
			}
		}
		else // ----------- const
		{
			DEBUGWARN("        load_declarations: 15");
			TRACE("Const id: " << d_const->get_ini()->getId() << std::endl)
			TRACE("Const id: " << d_const->get_ini()->getNum() << std::endl)
			declare(d_const->get_ini()->getId(),D_CONST,d_const->get_ini()->getNum());
			const_inil = d_const->get_inil();
			className = typeid(*const_inil).name(); 
			DEBUGINFO(className)
			if(className.compare("6S_Inil")) // end of the branch: a Inil symbol (decorated name)
			{
				while(const_inil != NULL)
				{
					declare(const_inil->get_ini()->getId(),D_CONST,const_inil->get_ini()->getNum());
					TRACE("Var idl n: " << const_inil->get_ini()->getId() << std::endl)
					TRACE("Var idl n: " << const_inil->get_ini()->getNum() << std::endl)
					const_inil = const_inil->get_inil();
					className = typeid(*const_inil).name(); 
					DEBUGINFO(className)
					if(!className.compare("6S_Inil")) // end of the branch: a Inil symbol (decorated name)
						break;
				}
			}
			DEBUGWARN("        load_declarations: 16");
		}
		DEBUGWARN("    load_declarations: 17");
		next = current->next();
		DEBUGWARN("    load_declarations: 18");
	}
	while(next != NULL);
	DEBUGINFO("load_declarations: END");
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
	std::string className; 
	do
	{
		current = next;
		curr_instruction = (static_cast<S_Biiter*>(current))->get_instruction();
		className = typeid(*current).name(); 
		if(!className.compare("4S_Bi")) // this means we reached the end of the branch: à Bi symbol (decorated name)
			break;
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
					/*className = typeid(*i_aff->get_id()).name(); 
					if(!className.compare("4S_Bi")) // to check if the id exists or not (like: used but not declared)
					{
						// TODO Stop exec and print message
					}*/
					if(declared(i_aff->get_id()->getValue())) // check that the var in which we store exists
					{
						Affectation * affect = new Affectation();
						affect->setAttributes(i_aff->get_id(),i_aff->expression());
						this->instructions.push(affect);
					}
					else
					{
						printer.printerr("No such element (:=) : ",i_aff->get_id()->getValue());
						exit (EXIT_FAILURE);
					}

				}
			}	
			else //  ------ read
			{
				if(declared(i_read->get_id()->getValue())) // check that the var in which we store exists
				{
					Read * rd = new Read();
					rd->setAttributes(i_read->get_id());
					this->instructions.push(rd);
				}
				else
				{
					printer.printerr("No such element (lire) : ",i_read->get_id()->getValue());
					exit (EXIT_FAILURE);
				}
				
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
			instructions.top()->execute(*this);
			delete instructions.top(); // TODO ok? 
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

bool Interpreter::declared(std::string name)
{
	return this->declarations.find(name) != this->declarations.end();
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
		if(this->declarations.find(id) == this->declarations.end())
		{
			this->printer.printerr("No such id: ",id);
			return 0;
		}
		else
		{
			return this->declarations.find(id)->second->getValue();
		}
	} 
	catch(std::exception &e) 
	{
		this->printer.printerr("Problem while getting value of: ",id);
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
		if (!decl->getType().compare(KEYWORD_VAR))
		{
			return static_cast<Var*>(decl);
		}
		else // TODO error if not VAR ?
		{	
			this->printer.printerr("Not a VAR: ",id);
			return NULL;
		}
	} 
	catch(std::exception &e) 
	{
		this->printer.printerr("No such id: ",id);
		// TODO: error if: name does not exist so can't get value
	}
	return NULL; // TODO const or equiv.
}