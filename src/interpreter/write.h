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
 
#include <iostream>
#include <streambuf>
#include <fstream>
#include "instruction.h"
#include "interpreter.h"
#include "../symbol/eprime.h"

class Write : public Instruction
{
private:
	std::streambuf * buf;
	std::ofstream out_f;
	double expr_value;
	S_Eprime * expr;
protected:
public:
    Write();
    virtual ~Write();
    int execute(Interpreter & interpreter);
    void setAttributes(bool isFile,std::string filename,S_Eprime * ex);
    void setAttributes(S_Eprime * ex) {setAttributes(false,"",ex);};
};
 
#endif