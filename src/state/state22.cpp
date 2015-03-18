// ---------------------------------------------
//  state22.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state22.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State22::State22()
    : State(22)
{
}

State22::~State22()
{
}

bool State22::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State22::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
