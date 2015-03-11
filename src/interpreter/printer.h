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
#include <cstdarg>
 
class Printer
{
private:
	void printString(int count, ...); 	// with count the number of arguments
protected:
public:
    Printer();
    virtual ~Printer();
    void print(std::string str);
    void print(double value);
    void printerr(std::string error, std::string desc);
    void printwarn(std::string warn, std::string desc);
    void printinfo(std::string info, std::string desc);
    void endline();
};
 
#endif