#include "automatonException.h"

const std::string EMPTY_INPUT_ERROR = "There is no more input symbols.";
const std::string EMPTY_STATE_STACK_ERROR = "The state stack is empty.";
const std::string EMPTY_SYMBOL_STACK_ERROR = "The symbol stack is empty.";
const std::string RULES_ERROR = "A problem occured with the rules.";

// Constructor
AutomatonException::AutomatonException(std::string msg)
    : message(msg) 
{

}

// Destructor
AutomatonException::~AutomatonException() throw()
{
    
}

const char* AutomatonException::what() const throw()
{ 
    return this->message.c_str(); 
}
