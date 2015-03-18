#include "operationException.h"

const char* OperationException::SETCONST = "Impossible to reassign a constant value";

// Constructor
OperationException::OperationException(const char* msg)
    : message(msg) 
{

}

// Destructor
OperationException::~OperationException() throw()
{
    
}


const char* OperationException::what() const throw()
{ 
    return this->message; 
}
