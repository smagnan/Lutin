// ---------------------------------------------
//  state14.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state14.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State14::State14()
    : State("State14")
{
}

State14::~State14()
{
}

bool State14::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PV:
            automaton.reduce(24);
            break;

        case VIR:
            automaton.reduce(24);
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}
