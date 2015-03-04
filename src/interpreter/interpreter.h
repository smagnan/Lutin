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

#include "declaration.h"
#include "var.h"
#include "const.h"
#include "instruction.h"
#include "read.h"
#include "write.h"
#include "affectation.h"
 
class Interpreter
{
private:
protected:
public:
    Interpreter();
    virtual ~Interpreter();
};
 
#endif