// ---------------------------------------------
//  state24.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state24.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state31.h" 
#include "state32.h" 
#include "state33.h" 

State24::State24()
    : State(24)
{
}

State24::~State24()
{
}

bool State24::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State24::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
