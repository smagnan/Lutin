// ---------------------------------------------
//  state4.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state4.h"
#include "../symbol/symbol.h"
#include "../automaton.h"
#include "../symbol/eq.h"


#include "state5.h" 

State4::State4()
    : State(4)
{
}

State4::~State4()
{
}

bool State4::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case EQ:
            automaton.shift(s, new State5());
            break;

        default:
            Symbol* symbol = new S_Eq();
            automaton.notifyMissingSymbol(symbol);
            automaton.shift(symbol, new State5());
            break;

    }
    
    return false;
}

State* State4::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
