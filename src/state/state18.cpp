// ---------------------------------------------
//  state18.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state18.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state23.h" 
#include "state24.h" 
#include "state21.h" 

State18::State18()
    : State("State18")
{
}

State18::~State18()
{
}

bool State18::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case ID:
            automaton.shift(s, new State23());
            break;

        case WRITE:
            automaton.shift(s, new State24());
            break;

        case READ:
            automaton.shift(s, new State21());
            break;

        case END:
            automaton.reduce(1);
            break;

    }
    
    return false;
}
