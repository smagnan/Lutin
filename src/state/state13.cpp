// ---------------------------------------------
//  state13.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state13.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state14.h" 

State13::State13()
    : State("State13")
{
}

State13::~State13()
{
}

bool State13::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case ID:
            automaton.shift(s, new State14());
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}
