// ---------------------------------------------
//  printer.h
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 07/03/2015
//
// ---------------------------------------------

#ifndef PRINTER_H
#define PRINTER_H

#include <string>

const std::string STYLE_DECLAR = 	"\033[1;31m"; // Red bold
const std::string STYLE_VALUE =		"\033[0;32m"; // Green
const std::string STYLE_SYMBOL = 	"\033[1;33m"; // Blue bold
const std::string STYLE_DEFAULT = 	"\033[0m";
 
class Printer
{
// http://en.wikipedia.org/wiki/ANSI_escape_code
private:
protected:
public:
    Printer();
    virtual ~Printer();
    void print(std::string str);
    void print(double value);
    void endline();
};
 
#endif