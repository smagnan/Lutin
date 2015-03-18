// ---------------------------------------------
//  state14.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state14.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State14::State14()
    : State(14)
{
}

State14::~State14()
{
}

bool State14::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State14::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
