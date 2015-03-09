// ---------------------------------------------
//  state9.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state9.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state4.h" 

State9::State9()
    : State("State9")
{
}

State9::~State9()
{
}

bool State9::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case ID:
            automaton.shift(s, new State4());
            break;

    }
    
    return false;
}
