// ---------------------------------------------
//  state10.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state10.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State10::State10()
    : State(10)
{
}

State10::~State10()
{
}

bool State10::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PV:
            automaton.reduce(7);
            break;

        case VIR:
            automaton.reduce(7);
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State10::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
