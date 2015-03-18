// ---------------------------------------------
//  state32.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state32.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State32::State32()
    : State(32)
{
}

State32::~State32()
{
}

bool State32::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PLUS:
            automaton.reduce(20);
            break;

        case MINUS:
            automaton.reduce(20);
            break;

        case MULT:
            automaton.reduce(20);
            break;

        case DIVIDE:
            automaton.reduce(20);
            break;

        case CLOSEBY:
            automaton.reduce(20);
            break;

        case PV:
            automaton.reduce(20);
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}
