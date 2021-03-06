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
    : State(42)
{
}

State42::~State42()
{
}

bool State42::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PLUS:
            automaton.reduce(13);
            break;

        case MINUS:
            automaton.reduce(13);
            break;

        case MULT:
            automaton.shift(s, new State36());
            break;

        case DIVIDE:
            automaton.shift(s, new State37());
            break;

        case CLOSEBY:
            automaton.reduce(13);
            break;

        case PV:
            automaton.reduce(13);
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State42::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
