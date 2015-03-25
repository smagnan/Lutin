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

class Write : public Instruction
{
private:
	std::streambuf * buf; // TODO move?
	std::ofstream out_f;  // TODO move?
	double expr_value;
protected:
public:
    Write();
    virtual ~Write();
    int execute();
    void setAttributes(bool isFile,std::string filename,double expr_ret);
};
 
#endif