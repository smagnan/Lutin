// ---------------------------------------------
//  state30.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state30.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State30::State30()
    : State(30)
{
}

State30::~State30()
{
}

bool State30::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State30::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
