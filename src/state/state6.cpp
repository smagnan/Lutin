// ---------------------------------------------
//  state6.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state6.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State6::State6()
    : State(6)
{
}

State6::~State6()
{
}

bool State6::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PV:
            automaton.reduce(8);
            break;

        case VIR:
            automaton.reduce(8);
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State6::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
