#include "mathException.h"


const std::string DIVIDE_BY_ZERO_ERROR = "Divide by zero.";
const std::string CANNOT_EVALUATE_ERROR = "Cannot evaluate object.";

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
