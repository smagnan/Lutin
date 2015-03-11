// ---------------------------------------------
//  state40.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state40.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State40::State40()
    : State("State40")
{
}

State40::~State40()
{
}

bool State40::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PLUS:
            automaton.reduce(17);
            break;

        case MINUS:
            automaton.reduce(17);
            break;

        case MULT:
            automaton.reduce(17);
            break;

        case DIVIDE:
            automaton.reduce(17);
            break;

        case CLOSEBY:
            automaton.reduce(17);
            break;

        case PV:
            automaton.reduce(17);
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}
