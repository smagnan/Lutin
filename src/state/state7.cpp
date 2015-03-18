// ---------------------------------------------
//  state7.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state7.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State7::State7()
    : State(7)
{
}

State7::~State7()
{
}

bool State7::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State7::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
