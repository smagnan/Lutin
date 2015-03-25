#include "mathException.h"


std::string MathException::DIVIDE_BY_ZERO = "Divide by zero";
std::string MathException::C_E_O = "Cannot evaluate object";

// Constructor
MathException::MathException(std::string msg)
    : message(msg) 
{

}

// Destructor
MathException::~MathException() throw()
{
    
}

const char* MathException::what() const throw()
{ 
    return this->message.c_str(); 
}
