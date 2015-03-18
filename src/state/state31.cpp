// ---------------------------------------------
//  state31.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state31.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state31.h" 
#include "state33.h" 
#include "state32.h" 

State31::State31()
    : State(31)
{
}

State31::~State31()
{
}

bool State31::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State31::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
