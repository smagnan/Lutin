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

const double DEFAULT_ELEM_VALUE = 0;                  // if the element (input...) is incorrect, specify the default value
enum Declar_Type {D_VAR,D_CONST,D_VALUE};
class Interpreter
{
private:
	std::stack<Instruction*> instructions;            // because the symbols/instructions are in the opposite order in the tree 
	std::map<std::string,Declaration*> declarations;  
    Printer printer;
    Symbol* symbol_tree;
protected:
    // Store a value in the declaration tree to be used 
    // (the value name is it's value)
    // Note that thanks to how the system is built, there are no redundancies between values (: (same value == same key)
    // XXX KEEP IN MIND THE PREVIOUS POINT XXX
    void keep_value(double val) {declare(std::string(),D_VALUE,val);}; 
    // Change the value of a variable
    void update_variable(std::string name, double val);
    // Print all the declarations - DEBUG oriented
    void print_declarations(std::ostream& out);
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
    // return the value associated with the element in memory (var,const ...)
    double get_value(std::string id);
    // return a pointer to the var associated at the id
    Var * get_variable(std::string id);
    // check if an element is ever declared or not ...
    bool declared(std::string name);
    // Delete all the declarations (free memory)
    // Can be called independently of destructor if needed
    void clean_declarations();
    // Delete all the instructions (free memory)
    // Can be called independently of destructor if needed
    void clean_instructions();

};
 
#endif