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

#include <iostream>
#include <streambuf>
#include <fstream>
#include "instruction.h"
#include "var.h"
#include "../symbol/id.h"
#include "interpreter.h"
 
class Read : public Instruction
{
private:
	std::streambuf * buf; 
	std::ifstream in_f;  
	Var * var;
    S_Id * id;
protected:
public:
    Read();
    virtual ~Read();
    int execute(Interpreter & interpreter);
    // isFile: true if we use a file for the input
    // filename: file name + path used for input
    // Var in which we put the result
    void setAttributes(bool isFile,std::string filename,S_Id * id_in); 
    void setAttributes(S_Id * id_in) {setAttributes(false,"",id_in);}; 
};
 
#endif