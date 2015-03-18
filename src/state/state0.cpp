// ---------------------------------------------
//  state0.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state0.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State0::State0()
    : State(0)
{
}

State0::~State0()
{
}

bool State0::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case VAR:
            automaton.reduce(22);
            break;

        case CONST:
            automaton.reduce(22);
            break;

        case END:
            automaton.reduce(22);
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
