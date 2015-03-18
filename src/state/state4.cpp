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

        default:
            automaton.error();
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
