// ---------------------------------------------
//  state11.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state11.h"
#include "../symbol/symbol.h"
#include "../automaton.h"
#include "../symbol/pv.h"


#include "state12.h" 

State11::State11()
    : State(11)
{
}

State11::~State11()
{
}

bool State11::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PV:
            automaton.shift(s, new State12());
            break;

        default:
            Symbol* symbol = new S_Pv();
            automaton.notifyMissingSymbol(symbol);
            automaton.shift(symbol, new State12());
            break;

    }
    
    return false;
}

State* State11::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
