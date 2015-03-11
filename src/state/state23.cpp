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


#include "state27.h" 

State23::State23()
    : State("State23")
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
            automaton.error();
            break;

    }
    
    return false;
}
