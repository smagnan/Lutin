// ---------------------------------------------
//  state5.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state5.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state6.h" 

State5::State5()
    : State(5)
{
}

State5::~State5()
{
}

bool State5::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case NUM:
            automaton.shift(s, new State6());
            break;

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
