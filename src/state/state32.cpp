// ---------------------------------------------
//  state32.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state32.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State32::State32()
    : State(32)
{
}

State32::~State32()
{
}

bool State32::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State32::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
