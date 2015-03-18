#include "syntaxException.h"

// Constructor
SyntaxException::SyntaxException(std::string msg)
    : message(msg) 
{
    
}

// Destructor
SyntaxException::~SyntaxException() throw()
{
    
}


const char* SyntaxException::what() const throw()
{ 
    return this->message.c_str(); 
}
