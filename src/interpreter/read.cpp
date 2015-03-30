// ---------------------------------------------
//  read.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include <exception>
#include <limits>
#include "read.h"
#include "../debugger.h"

// Read constructor
Read::Read() 
{

}

Read::~Read()
{

}

void Read::setAttributes(bool isFile,std::string filename,S_Id * id_in)
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
	this->id = id_in;
}

int Read::execute(Interpreter & interpreter)
{
	if (attributes_set)
		return EXEC_RET_NOTSET;
	try 
	{
		this->var = interpreter.get_variable(this->id->getValue());
		if (this->var ==  NULL) 
			return EXEC_RET_NOTAVAR;
		std::istream in(buf);
		std::cin.clear();
		in >> *this->var;
	}
	catch(std::exception &e) 
	{
		return EXEC_RET_ERROR;
	}

	return EXEC_RET_OK;
}