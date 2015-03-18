// ---------------------------------------------
//  state9.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state9.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state4.h" 

State9::State9()
    : State(9)
{
}

State9::~State9()
{
}

bool State9::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State9::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
