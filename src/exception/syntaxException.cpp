#include "syntaxException.h"

// Constructor
SyntaxException::SyntaxException(const char* msg)
    : message(msg) 
{
    
}

// Destructor
SyntaxException::~SyntaxException() throw()
{
    
}


const char* SyntaxException::what() const throw()
{ 
    return this->message; 
}