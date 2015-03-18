// ---------------------------------------------
//  state18.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state18.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state23.h" 
#include "state24.h" 
#include "state21.h" 

State18::State18()
    : State(18)
{
}

State18::~State18()
{
}

bool State18::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State18::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
