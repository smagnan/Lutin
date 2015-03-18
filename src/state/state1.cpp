// ---------------------------------------------
//  state1.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state1.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State1::State1()
    : State(1)
{
}

State1::~State1()
{
}

bool State1::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return false;
}
