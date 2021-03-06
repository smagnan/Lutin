// ---------------------------------------------
//  state41.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state41.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State41::State41()
    : State(41)
{
}

State41::~State41()
{
}

bool State41::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PLUS:
            automaton.reduce(19);
            break;

        case MINUS:
            automaton.reduce(19);
            break;

        case MULT:
            automaton.reduce(19);
            break;

        case DIVIDE:
            automaton.reduce(19);
            break;

        case CLOSEBY:
            automaton.reduce(19);
            break;

        case PV:
            automaton.reduce(19);
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State41::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
