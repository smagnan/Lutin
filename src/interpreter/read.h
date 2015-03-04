// ---------------------------------------------
//  read.h
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#ifndef READ_H
#define READ_H

#include "instruction.h"
 
class Read : private Instruction
{
private:
protected:
public:
    Read();
    virtual ~Read();
};
 
#endif