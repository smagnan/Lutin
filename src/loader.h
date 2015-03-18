// ---------------------------------------------
//  loader.h
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 18/03/2015
//
// ---------------------------------------------

#ifndef LOADER_H
#define LOADER_H
 
#include "instruction.h"
#include <sstream>
#include <fstream>

class Loader : public Instruction
{
private:
	std::stringstream buffer;
	std::ifstream file;
protected:
public:
    Loader(char * filepath);
    virtual ~Loader();
};
 
#endif