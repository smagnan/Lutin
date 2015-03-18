// ---------------------------------------------
//  state2.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state2.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state13.h" 
#include "state3.h" 

State2::State2()
    : State(2)
{
}

State2::~State2()
{
}

bool State2::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State2::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
