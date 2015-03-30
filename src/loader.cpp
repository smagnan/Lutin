// ---------------------------------------------
//  loader.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 18/03/2015
//
// ---------------------------------------------

#include "loader.h"
#include <iostream>

// Loader constructor
Loader::Loader(const char * filepath) 
{	
	load(filepath);
}

Loader::~Loader()
{

}

void Loader::load(const char * filepath)
{
	this->file.open(filepath);
	if (this->file.is_open()) 
	{
        this->buffer << this->file.rdbuf();
    }
    else 
	{
        std::cerr << "Erreur a l'ouverture du fichier " << filepath << std::endl;
    }
}
