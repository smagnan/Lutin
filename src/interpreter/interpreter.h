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

enum Declar_Type {VAR,CONST,VALUE};
class Interpreter
{
private:
	std::queue<Instruction*> instructions;
	std::map<std::string,Declaration*> declarations;  // http://bannalia.blogspot.fr/2014/05/fast-polymorphic-collections.html instead?
protected:
public:
    Interpreter();
    virtual ~Interpreter();
	// executes the program currently loaded
	// XXX return value -> error code?
    void run();			
    // I think double is the more generic type in our case
    // or we can build a custom type ...
    void declare(std::string name, Declar_Type type, double val); 
    // Delete all the declarations (free memory)
    void clean_declarations();
    // Delete all the instructions (free memory)
    void clean_instructions();

};
 
#endif