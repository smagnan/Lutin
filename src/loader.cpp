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
        std::cerr << "Erreur, veuillez specifier des arguments"                 << std::endl;
        std::cerr << "  Utilisation :"                                          << std::endl;
        std::cerr << "    ../lut [-p] [-a] [-e] [-o] source.lt"                 << std::endl;
        std::cerr << "      [-p] affiche le code source reconnu"                << std::endl;
        std::cerr << "      [-a] analyse le programme de maniere statique"      << std::endl;
        std::cerr << "      [-e] execute interactivement le programme"          << std::endl;
        std::cerr << "      [-o] optimise les expressions et instructions"      << std::endl;
    }
}
