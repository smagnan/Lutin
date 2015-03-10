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
#include "printer_config.h"

using std::cout;
using std::endl;

// ==================================================== PUBLIC

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

void Printer::printerr(std::string error, std::string desc)
{
	printString(NB_ARGS_PRINT_STR,STYLE_ERROR_T.c_str(),MSG_ERROR.c_str(),STYLE_ERROR_T.c_str(),error.c_str(),STYLE_ERROR.c_str(),desc.c_str());
	endline();
}

void Printer::printwarn(std::string warn, std::string desc)
{
	printString(NB_ARGS_PRINT_STR,STYLE_WARN_T.c_str(),MSG_WARN.c_str(),STYLE_WARN_T.c_str(),warn.c_str(),STYLE_WARN.c_str(),desc.c_str());
	endline();
}

void Printer::endline()
{
	cout << STYLE_DEFAULT << ";" << endl;
}

// ==================================================== PRIVATE

void Printer::printString(int count, ...)
{
	va_list ap;
    int j;
    va_start(ap, count);
    for(j = 0; j < count; j++)
        cout << va_arg(ap, char*); 
    va_end(ap);
}

