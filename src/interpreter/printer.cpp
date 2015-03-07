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
	// TODO to change, will depens on an external file and will not be hardcoded
	// I know it's ugly but just wanted something working
	if(!str.compare("Var") || !str.compare("Const") || !str.compare("Value")) {
		cout << STYLE_DECLAR << str << ' ';
	} else if(!str.compare("+") || !str.compare("-") \
				|| !str.compare("*") || !str.compare("/") \
				|| !str.compare("=")) {
		cout << STYLE_SYMBOL << str << ' ';
	} else {
		cout << STYLE_DEFAULT << str << ' ';
	}
	
}

void Printer::print(double value)
{
	cout << STYLE_VALUE << value << ' ';
}

void Printer::endline()
{
	cout << STYLE_DEFAULT << ";" << endl;
}