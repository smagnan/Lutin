// ---------------------------------------------
//  state29.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state29.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state36.h" 
#include "state37.h" 

State29::State29()
    : State(29)
{
}

State29::~State29()
{
}

bool State29::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State29::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
