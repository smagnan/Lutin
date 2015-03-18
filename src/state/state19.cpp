// ---------------------------------------------
//  state19.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state19.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state20.h" 

State19::State19()
    : State(19)
{
}

State19::~State19()
{
}

bool State19::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PV:
            automaton.shift(s, new State20());
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}
