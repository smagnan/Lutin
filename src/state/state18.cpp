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
#include "state19.h" 

State18::State18()
    : State(18)
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

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State18::getNextState(Symbol * s)
{
    switch(*s)
    {

        case I:
            return new State19();

        default:
            break;
    }
    
    return 0;
}
