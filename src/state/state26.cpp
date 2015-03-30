// ---------------------------------------------
//  state26.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state26.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State26::State26()
    : State(26)
{
}

State26::~State26()
{
}

bool State26::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PV:
            automaton.reduce(10);
            break;

        default:
            Symbol* symbol = new S_Pv();
            automaton.notifyMissingSymbol(symbol);
            automaton.reduce(10);
            break;

    }
    
    return false;
}

State* State26::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
