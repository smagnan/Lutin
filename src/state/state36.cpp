// ---------------------------------------------
//  state36.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state36.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state31.h" 
#include "state32.h" 
#include "state33.h" 
#include "state40.h" 
#include "state43.h" 

State36::State36()
    : State(36)
{
}

State36::~State36()
{
}

bool State36::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case OPENBY:
            automaton.shift(s, new State31());
            break;

        case ID:
            automaton.shift(s, new State32());
            break;

        case NUM:
            automaton.shift(s, new State33());
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State36::getNextState(Symbol * s)
{
    switch(*s)
    {

        case T:
            return new State40();

        case F:
            return new State43();

        default:
            break;
    }
    
    return 0;
}
