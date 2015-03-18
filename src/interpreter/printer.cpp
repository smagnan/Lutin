// ---------------------------------------------
//  printer.cpp
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#include <iostream>
#include <vector>
#include <iterator>

#include "printer.h"
#include "printer_config.h"
#include "../utils.h"

using std::cout;
using std::endl;
using Utils::split;

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
	// TODO to change? will depens on an external file and will not be hardcoded?
	std::vector<std::string> lines;
	std::vector<std::string> words;
	split(str,lines,'\n'); // split text into lines
	for(std::vector<std::string>::iterator it = lines.begin(); it != lines.end(); ++it) {
		words.clear();
	    split(*it,words,' ');	// split lines in words
	    for(std::vector<std::string>::iterator it2 = words.begin(); it2 != words.end(); ++it2) {
	    	out << selectStyle(*it2) << str << ' ';
	    	// TODO: ';' will be inside a word ... -> change that
	    }	    
	}	
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

std::string Printer::selectStyle(const std::string keyword) const
{
	if(!keyword.compare(KEYWORD_VAR)) {
		return STYLE_VAR;
	} else if(!keyword.compare(KEYWORD_CONST)) {
		return STYLE_CONST;
	} else if(!keyword.compare(KEYWORD_VALUE)) {
		return STYLE_VALUE;
	} else if(!keyword.compare(KEYWORD_EQ)) {
		return STYLE_EQ;
	} else if(!keyword.compare(KEYWORD_PLUS)) {
		return STYLE_PLUS;
	} else if(!keyword.compare(KEYWORD_MINUS)) {
		return STYLE_MINUS;
	} else if(!keyword.compare(KEYWORD_MULT)) {
		return STYLE_MULT;
	} else if(!keyword.compare(KEYWORD_DIV)) {
		return STYLE_DIV;
	} else if(!keyword.compare(KEYWORD_LPAR)) {
		return STYLE_LPAR;
	} else if(!keyword.compare(KEYWORD_RPAR)) {
		return STYLE_RPAR;
	} else if(!keyword.compare(KEYWORD_ASSIGN)) {
		return STYLE_ASSIGN;
	} else if(!keyword.compare(KEYWORD_READ)) {
		return STYLE_READ;
	} else if(!keyword.compare(KEYWORD_WRITE)) {
		return STYLE_WRITE;
	} else if(!keyword.compare(KEYWORD_END)) {
		return STYLE_END;
	} else if(!keyword.compare(KEYWORD_SPACE)) {
		return STYLE_SPACE;
	} else if(!keyword.compare(KEYWORD_DOT)) {
		return STYLE_DOT;
	} else if(!keyword.compare(KEYWORD_COMA)) {
		return STYLE_COMA;
	} else {
		return STYLE_OTHER;
	}
	return STYLE_OTHER;
}

