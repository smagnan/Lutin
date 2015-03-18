// ---------------------------------------------
//  state16.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state16.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state17.h" 

State16::State16()
    : State(16)
{
}

State16::~State16()
{
}

bool State16::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case ID:
            automaton.shift(s, new State17());
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}
