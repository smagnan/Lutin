// ---------------------------------------------
//  state14.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state14.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state15.h" 

State14::State14()
    : State(14)
{
}

State14::~State14()
{
}

bool State14::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PV:
            automaton.reduce(24);
            break;

        case VIR:
            automaton.reduce(24);
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State14::getNextState(Symbol * s)
{
    switch(*s)
    {

        case IDL:
            return new State15();

        default:
            break;
    }
    
    return 0;
}
