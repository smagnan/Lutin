// ---------------------------------------------
//  state22.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state22.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State22::State22()
    : State(22)
{
}

State22::~State22()
{
}

bool State22::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PV:
            automaton.reduce(11);
            break;

        default:
            Symbol* symbol = new S_Pv();
            automaton.notifyMissingSymbol(symbol);
            automaton.reduce(11);
            break;

    }
    
    return false;
}

State* State22::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
