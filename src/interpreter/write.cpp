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

int  Write::execute()
{	
	if (attributes_set)
		return EXEC_RET_NOTSET;
	try 
	{
		// XXX code exec here
		std::ostream out(buf);
		out << this->expr_value;
	}
	catch(std::exception &e) 
	{
		return EXEC_RET_ERROR;
	}
	return EXEC_RET_OK;
}

void Write::setAttributes(bool isFile,std::string filename,double expr_ret)
// TODO ? stream as param instead of that?
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
	this->expr_value = expr_ret;
}