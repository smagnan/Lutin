// ---------------------------------------------
//  state25.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state25.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State25::State25()
    : State(25)
{
}

State25::~State25()
{
}

bool State25::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State25::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
