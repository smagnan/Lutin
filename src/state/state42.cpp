// ---------------------------------------------
//  state42.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state42.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state36.h" 
#include "state37.h" 

State42::State42()
    : State("State42")
{
}

State42::~State42()
{
}

bool State42::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case MULT:
            automaton.shift(s, new State36());
            break;

        case DIVIDE:
            automaton.shift(s, new State37());
            break;

    }
    
    return false;
}
