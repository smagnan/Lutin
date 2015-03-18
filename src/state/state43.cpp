// ---------------------------------------------
//  state43.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state43.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State43::State43()
    : State(43)
{
}

State43::~State43()
{
}

bool State43::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PLUS:
            automaton.reduce(16);
            break;

        case MINUS:
            automaton.reduce(16);
            break;

        case MULT:
            automaton.reduce(16);
            break;

        case DIVIDE:
            automaton.reduce(16);
            break;

        case CLOSEBY:
            automaton.reduce(16);
            break;

        case PV:
            automaton.reduce(16);
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return false;
}
