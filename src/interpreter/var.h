// ---------------------------------------------
//  var.h
//
//	Created	 :
//		by 	 : Samuel MAGNAN
//		date : 04/03/2015
//
// ---------------------------------------------

#ifndef VAR_H
#define VAR_H

#include <exception>
#include <iostream>
#include "declaration.h"

class NoInitException : public std::exception 
{
private:
protected:
public:
    virtual const char* what() const throw()
    {
        return "Not initialised";
    }
};
 
class Var : public Declaration
{
private:
	bool affected;
	static const int DEFAULT_INIT_VAL = 0;
	NoInitException noInitEx;
protected:
public:
    Var(std::string varName, double val);
    Var(std::string varName);
    virtual ~Var();
    void setValue(double val);
    friend std::istream& operator >> (std::istream& input, Var& obj);
    double getValue();
};
 
#endif