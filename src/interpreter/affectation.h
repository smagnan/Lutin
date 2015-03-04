// ---------------------------------------------
//  affectation.h
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#ifndef AFFECTATION_H
#define AFFECTATION_H
 
#include "instruction.h"
 
class Affectation : private Instruction
{
private:
protected:
public:
    Affectation();
    virtual ~Affectation();
};
 
#endif