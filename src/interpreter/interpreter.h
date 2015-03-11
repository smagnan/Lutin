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

enum Declar_Type {VAR,CONST,VALUE};
class Interpreter
{
private:
	std::queue<Instruction*> instructions;
	std::map<std::string,Declaration*> declarations;  // http://bannalia.blogspot.fr/2014/05/fast-polymorphic-collections.html instead?
    Printer printer;
protected:
public:
    Interpreter();
    virtual ~Interpreter();
	// executes the program currently loaded
	// XXX return value -> error code?
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
    void keep_value(double val) {declare(std::string(),VALUE,val);}; 
    // Change the value of a variable
    void update_variable(std::string name, double val);
    // Print all the declarations
    void print_declarations(); // TODO not here
    // Print all the instructions
    void print_instructions(); // TODO not here
    // Delete all the declarations (free memory)
    // Can be called independently of destructor if needed
    void clean_declarations();
    // Delete all the instructions (free memory)
    // Can be called independently of destructor if needed
    void clean_instructions();

};
 
#endif