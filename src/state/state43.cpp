// ---------------------------------------------
//  state43.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state43.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State43::State43()
    : State(43)
{
}

State43::~State43()
{
}

bool State43::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State43::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
