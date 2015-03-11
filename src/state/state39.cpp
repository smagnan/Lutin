// ---------------------------------------------
//  state39.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state39.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state36.h" 
#include "state37.h" 

State39::State39()
    : State("State39")
{
}

State39::~State39()
{
}

bool State39::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PLUS:
            automaton.reduce(14);
            break;

        case MINUS:
            automaton.reduce(14);
            break;

        case MULT:
            automaton.shift(s, new State36());
            break;

        case DIVIDE:
            automaton.shift(s, new State37());
            break;

        case CLOSEBY:
            automaton.reduce(14);
            break;

        case PV:
            automaton.reduce(14);
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}
