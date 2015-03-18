// ---------------------------------------------
//  state40.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state40.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State40::State40()
    : State(40)
{
}

State40::~State40()
{
}

bool State40::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State40::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
