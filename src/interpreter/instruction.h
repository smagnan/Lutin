// ---------------------------------------------
//  instruction.h
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#ifndef INSTRUCTION_H
#define INSTRUCTION_H

class Interpreter;

// TODO: real error or stuff
const int EXEC_RET_OK = 		0;
const int EXEC_RET_ERROR = 		-1; // TODO add more details
const int EXEC_RET_NOTSET = 	-2; // all attributes are not set yet
const int EXEC_RET_NOTAVAR = 	-3; // looking for a var, found something else

class Instruction
{
private:
protected:
	bool attributes_set;
public:
    Instruction();
    virtual ~Instruction();
    virtual int execute(Interpreter&) = 0;
};
 
#endif