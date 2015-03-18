// ---------------------------------------------
//  state29.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state29.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state36.h" 
#include "state37.h" 

State29::State29()
    : State(29)
{
}

State29::~State29()
{
}

bool State29::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PLUS:
            automaton.reduce(15);
            break;

        case MINUS:
            automaton.reduce(15);
            break;

        case MULT:
            automaton.shift(s, new State36());
            break;

        case DIVIDE:
            automaton.shift(s, new State37());
            break;

        case CLOSEBY:
            automaton.reduce(15);
            break;

        case PV:
            automaton.reduce(15);
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
