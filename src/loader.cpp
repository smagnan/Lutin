// ---------------------------------------------
//  loader.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 18/03/2015
//
// ---------------------------------------------

#include "loader.h"

// Loader constructor
Loader::Loader(char * filepath) 
{	
	this->file.open(filepath);
	if (this->file..is_open())
    {
        this->buffer << this->file.rdbuf();
    }
    else
    {
        // TODO error management
    }
	
}

Loader::~Loader()
{

}