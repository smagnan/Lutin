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

void Printer::print(std::ostream& out,std::string str)
{
	// TODO to change, will depens on an external file and will not be hardcoded
	// I know it's ugly but just wanted something working
	// There is no such thing as a switch case
	std::string style_string;
	if(!str.compare(KEYWORD_VAR)) {
		style_string = STYLE_VAR;
	} else if(!str.compare(KEYWORD_CONST)) {
		style_string = STYLE_CONST;
	} else if(!str.compare(KEYWORD_VALUE)) {
		style_string = STYLE_VALUE;
	} else if(!str.compare(KEYWORD_EQ)) {
		style_string = STYLE_EQ;
	} else if(!str.compare(KEYWORD_PLUS)) {
		style_string = STYLE_PLUS;
	} else if(!str.compare(KEYWORD_MINUS)) {
		style_string = STYLE_MINUS;
	} else if(!str.compare(KEYWORD_MULT)) {
		style_string = STYLE_MULT;
	} else if(!str.compare(KEYWORD_DIV)) {
		style_string = STYLE_DIV;
	} else if(!str.compare(KEYWORD_LPAR)) {
		style_string = STYLE_LPAR;
	} else if(!str.compare(KEYWORD_RPAR)) {
		style_string = STYLE_RPAR;
	} else if(!str.compare(KEYWORD_ASSIGN)) {
		style_string = STYLE_ASSIGN;
	} else if(!str.compare(KEYWORD_READ)) {
		style_string = STYLE_READ;
	} else if(!str.compare(KEYWORD_WRITE)) {
		style_string = STYLE_WRITE;
	} else if(!str.compare(KEYWORD_END)) {
		style_string = STYLE_END;
	} else if(!str.compare(KEYWORD_SPACE)) {
		style_string = STYLE_SPACE;
	} else if(!str.compare(KEYWORD_DOT)) {
		style_string = STYLE_DOT;
	} else {
		style_string = STYLE_OTHER;
	}

	out << style_string << str << ' ';
	/*if(!str.compare("Var") || !str.compare("Const") || !str.compare("Value")) {
		out << STYLE_DECLAR << str << ' ';
	} else if(!str.compare("+") || !str.compare("-") \
				|| !str.compare("*") || !str.compare("/") \
				|| !str.compare("=")) {
		out << STYLE_SYMBOL << str << ' ';
	} else {
		out << STYLE_DEFAULT << str << ' ';
	}*/	
}

void Printer::print(std::ostream& out,double value)
{
	out << STYLE_NUM << value << ' ';
}

void Printer::printerr(std::string error, std::string desc)
{
	printString(NB_ARGS_PRINT_STR,STYLE_ERROR_T.c_str(),MSG_ERROR.c_str(),STYLE_ERROR_T.c_str(),error.c_str(),STYLE_ERROR.c_str(),desc.c_str());
	cout << STYLE_DEFAULT << endl;
}

void Printer::printwarn(std::string warn, std::string desc)
{
	printString(NB_ARGS_PRINT_STR,STYLE_WARN_T.c_str(),MSG_WARN.c_str(),STYLE_WARN_T.c_str(),warn.c_str(),STYLE_WARN.c_str(),desc.c_str());
	cout << STYLE_DEFAULT << endl;
}

void Printer::printinfo(std::string info, std::string desc)
{
	printString(NB_ARGS_PRINT_STR,STYLE_INFO_T.c_str(),MSG_INFO.c_str(),STYLE_INFO_T.c_str(),info.c_str(),STYLE_INFO.c_str(),desc.c_str());
	cout << STYLE_DEFAULT << endl;
}
void Printer::print(std::string def, std::string desc)
{
	printString(NB_ARGS_PRINT_STR,STYLE_DEFAULT_T.c_str(),MSG_DEFAULT.c_str(),STYLE_DEFAULT_T.c_str(),def.c_str(),STYLE_DEFAULT.c_str(),desc.c_str());
	cout << STYLE_DEFAULT << endl;
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

