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
    std::string selectStyle(const std::string keyword) const;
protected:
public:
    Printer();
    virtual ~Printer();
    // Print Lutin code with syntaxic coloration 
    // seems it has a swapping problem on some configurations
    void print(std::ostream& out,std::string str);
    void print(std::ostream& out,double value);
    // ERROR printer: syntaxic coloration
    void printerr(std::string error, std::string desc); 
    // WARNING printer: syntaxic coloration
    void printwarn(std::string warn, std::string desc);
    // INFO printer: syntaxic coloration
    void printinfo(std::string info, std::string desc);
    void print(std::string def, std::string desc);
    void endline();
};
 
#endif