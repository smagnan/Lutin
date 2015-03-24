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
#include <string>

class Loader
{
private:
	std::stringstream buffer;
	std::ifstream file;
protected:
public:
    Loader(const char * filepath);
    virtual ~Loader();
    void load(const char * filepath);
    std::string string(){return buffer.str();};
};
 
#endif