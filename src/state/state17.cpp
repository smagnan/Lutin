// ---------------------------------------------
//  state17.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state17.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State17::State17()
    : State("State17")
{
}

State17::~State17()
{
}

bool State17::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PV:
            automaton.reduce(5);
            break;

        case VIR:
            automaton.reduce(5);
            break;

    }
    
    return false;
}
