// ---------------------------------------------
//  state2.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state2.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state13.h" 
#include "state3.h" 

State2::State2()
    : State(2)
{
}

State2::~State2()
{
}

bool State2::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case VAR:
            automaton.shift(s, new State13());
            break;

        case CONST:
            automaton.shift(s, new State3());
            break;

        case END:
            automaton.reduce(23);
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
