// ---------------------------------------------
//  state36.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state36.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state31.h" 
#include "state32.h" 
#include "state33.h" 

State36::State36()
    : State(36)
{
}

State36::~State36()
{
}

bool State36::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State36::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
