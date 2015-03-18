// ---------------------------------------------
//  state28.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state28.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state34.h" 
#include "state35.h" 

State28::State28()
    : State(28)
{
}

State28::~State28()
{
}

bool State28::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State28::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
