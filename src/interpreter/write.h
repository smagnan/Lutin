// ---------------------------------------------
//  write.h
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#ifndef WRITE_H
#define WRITE_H
 
#include "instruction.h"

class Write : private Instruction
{
private:
protected:
public:
    Write();
    virtual ~Write();
};
 
#endif