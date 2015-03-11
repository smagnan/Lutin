// ---------------------------------------------
//  state22.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state22.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State22::State22()
    : State("State22")
{
}

State22::~State22()
{
}

bool State22::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PV:
            automaton.reduce(11);
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}
