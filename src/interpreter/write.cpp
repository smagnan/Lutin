// ---------------------------------------------
//  write.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include "write.h"

// Write constructor
Write::Write() 
{

}

Write::~Write()
{

}

int  Write::execute(Interpreter & interpreter)
{	
	if (attributes_set)
		return EXEC_RET_NOTSET;
	try 
	{
		// exec:
		std::ostream out(buf);
		this->expr_value = this->expr->eval(interpreter);
		out.precision(16);
		out << std::fixed << this->expr_value << std::endl; 
	}
	catch(std::exception &e) 
	{
		return EXEC_RET_ERROR;
	}
	return EXEC_RET_OK;
}

void Write::setAttributes(bool isFile,std::string filename,S_Eprime * ex)
{
	if(isFile) 
	{
    	out_f.open(filename.c_str());
	    buf = out_f.rdbuf();
	} 
	else 
	{
	    buf = std::cout.rdbuf();
	}	
	this->expr = ex;
}