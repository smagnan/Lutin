// ---------------------------------------------
//  state41.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state41.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State41::State41()
    : State(41)
{
}

State41::~State41()
{
}

bool State41::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State41::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
