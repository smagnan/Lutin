// ---------------------------------------------
//  state15.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state15.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state16.h" 

State15::State15()
    : State(15)
{
}

State15::~State15()
{
}

bool State15::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PV:
            automaton.reduce(4);
            break;

        case VIR:
            automaton.shift(s, new State16());
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State15::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
