// ---------------------------------------------
//  state28.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state28.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state34.h" 
#include "state35.h" 

State28::State28()
    : State("State28")
{
}

State28::~State28()
{
}

bool State28::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PLUS:
            automaton.shift(s, new State34());
            break;

        case MINUS:
            automaton.shift(s, new State35());
            break;

    }
    
    return false;
}