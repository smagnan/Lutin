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
