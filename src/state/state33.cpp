// ---------------------------------------------
//  state33.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state33.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State33::State33()
    : State(33)
{
}

State33::~State33()
{
}

bool State33::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PLUS:
            automaton.reduce(21);
            break;

        case MINUS:
            automaton.reduce(21);
            break;

        case MULT:
            automaton.reduce(21);
            break;

        case DIVIDE:
            automaton.reduce(21);
            break;

        case CLOSEBY:
            automaton.reduce(21);
            break;

        case PV:
            automaton.reduce(21);
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}
