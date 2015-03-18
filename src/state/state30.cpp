// ---------------------------------------------
//  state30.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state30.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State30::State30()
    : State(30)
{
}

State30::~State30()
{
}

bool State30::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PLUS:
            automaton.reduce(18);
            break;

        case MINUS:
            automaton.reduce(18);
            break;

        case MULT:
            automaton.reduce(18);
            break;

        case DIVIDE:
            automaton.reduce(18);
            break;

        case CLOSEBY:
            automaton.reduce(18);
            break;

        case PV:
            automaton.reduce(18);
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State30::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
