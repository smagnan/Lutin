// ---------------------------------------------
//  state7.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state7.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state8.h" 

State7::State7()
    : State(7)
{
}

State7::~State7()
{
}

bool State7::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PV:
            automaton.reduce(25);
            break;

        case VIR:
            automaton.reduce(25);
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State7::getNextState(Symbol * s)
{
    switch(*s)
    {

        case INIL:
            return new State8();

        default:
            break;
    }
    
    return 0;
}
