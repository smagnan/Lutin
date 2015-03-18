// ---------------------------------------------
//  state37.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state37.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state31.h" 
#include "state32.h" 
#include "state33.h" 

State37::State37()
    : State(37)
{
}

State37::~State37()
{
}

bool State37::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State37::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
