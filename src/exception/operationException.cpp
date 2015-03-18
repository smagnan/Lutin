#include "operationException.h"

std::string OperationException::SETCONST = "Impossible to reassign a constant value : ";

// Constructor
OperationException::OperationException(std::string msg)
    : message(msg) 
{

}

// Destructor
OperationException::~OperationException() throw()
{
    
}

const char* OperationException::what() const throw()
{ 
    return this->message.c_str(); 
}
