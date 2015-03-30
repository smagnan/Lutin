// ---------------------------------------------
//  state23.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state23.h"
#include "../symbol/symbol.h"
#include "../automaton.h"
#include "../symbol/aff.h"


#include "state27.h" 

State23::State23()
    : State(23)
{
}

State23::~State23()
{
}

bool State23::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case AFF:
            automaton.shift(s, new State27());
            break;

        default:
            Symbol* symbol = new S_Aff();
            automaton.notifyMissingSymbol(symbol);
            automaton.shift(symbol, new State27());
            break;

    }
    
    return false;
}

State* State23::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
