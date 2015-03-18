// ---------------------------------------------
//  state17.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state17.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State17::State17()
    : State(17)
{
}

State17::~State17()
{
}

bool State17::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State17::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
