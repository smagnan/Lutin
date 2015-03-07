// ---------------------------------------------
//  printer.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include <iostream>

#include "printer.h"

using std::cout;
using std::endl;

// Printer constructor
Printer::Printer() 
{

}

Printer::~Printer()
{

}

void Printer::print(std::string str)
{
	cout << STYLE_DECLAR << str << STYLE_DEFAULT << endl;
}