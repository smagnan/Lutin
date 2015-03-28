// ---------------------------------------------
//  interpreter.h
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#ifndef INTERPRETER_H
#define INTERPRETER_H

#include <map>
#include <queue>
#include <stack>
#include <string>
#include <utility> 

#include "declaration.h"
#include "var.h"
#include "const.h"
#include "value.h"
#include "instruction.h"
#include "read.h"
#include "write.h"
#include "affectation.h"
#include "printer.h"
#include "../symbol/symbol.h"
#include "../symbol/eprime.h"

enum Declar_Type {D_VAR,D_CONST,D_VALUE};
class Interpreter
{
private:
	std::stack<Instruction*> instructions;            // because the symbols/instructions are in the opposite order in the tree 
	std::map<std::string,Declaration*> declarations;  // http://bannalia.blogspot.fr/2014/05/fast-polymorphic-collections.html instead?
    Printer printer;
    Symbol* symbol_tree;
protected:
public:
    Interpreter(Symbol* tree);
    virtual ~Interpreter();
    // Load the declaration block
    // TODO XXX return value -> error code?
    void load_declarations();
    // Load the instructions block
    // TODO XXX return value -> error code?
    void load_instructions();
	// executes the program currently loaded
	// TODO XXX return value -> error code?
    void run();			
    // I think double is the more generic type in our case
    // or we can build a custom type ...
    void declare(const std::string &name, Declar_Type type, double val); 
    // To declare an uninitialised var
    void declare(const std::string &name);
    // Store a value in the declaration tree to be used 
    // (the value name is it's value)
    // Note that thanks to how the system is built, there are no redundancies between values (: (same value == same key)
    // XXX KEEP IN MIND THE PREVIOUS POINT XXX
    void keep_value(double val) {declare(std::string(),D_VALUE,val);}; 
    // Change the value of a variable
    void update_variable(std::string name, double val);
    // return the value associated with the element in memory (var,const ...)
    double get_value(std::string id);
    // return a pointer to the var associated at the id
    Var * get_variable(std::string id);
    // Print all the declarations
    void print_declarations(std::ostream& out); // TODO not here
    // Print all the instructions
    void print_instructions(std::ostream& out); // TODO not here
    // Delete all the declarations (free memory)
    // Can be called independently of destructor if needed
    void clean_declarations();
    // Delete all the instructions (free memory)
    // Can be called independently of destructor if needed
    void clean_instructions();

};
 
#endif