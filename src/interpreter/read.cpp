// ---------------------------------------------
//  read.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include <exception>
#include "read.h"

// Read constructor
Read::Read() 
{

}

Read::~Read()
{

}

void Read::setAttributes(bool isFile,std::string filename,Var * variable)
{
	if(isFile) 
	{
    	in_f.open(filename.c_str());
	    buf = in_f.rdbuf();
	} 
	else 
	{
	    buf = std::cin.rdbuf();
	}	
	this->var = variable;
}

int Read::execute()
{
	if (attributes_set)
		return EXEC_RET_NOTSET;
	try 
	{
		// XXX code exec here
		std::istream in(buf);
		in >> *this->var;
	}
	catch(std::exception &e) 
	{
		return EXEC_RET_ERROR;
	}


	return EXEC_RET_OK;
}