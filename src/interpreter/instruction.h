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
 
class Instruction
{
private:
protected:
public:
    Instruction();
    virtual ~Instruction();
    virtual void execute();
};
 
#endif