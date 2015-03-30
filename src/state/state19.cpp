// ---------------------------------------------
//  state19.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state19.h"
#include "../symbol/symbol.h"
#include "../automaton.h"
#include "../symbol/pv.h"


#include "state20.h" 

State19::State19()
    : State(19)
{
}

State19::~State19()
{
}

bool State19::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PV:
            automaton.shift(s, new State20());
            break;

        default:
            Symbol* symbol = new S_Pv();
            automaton.notifyMissingSymbol(symbol);
            automaton.shift(symbol, new State20());
            break;

    }
    
    return false;
}

State* State19::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
