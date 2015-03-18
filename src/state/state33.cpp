// ---------------------------------------------
//  state33.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state33.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State33::State33()
    : State(33)
{
}

State33::~State33()
{
}

bool State33::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State33::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
