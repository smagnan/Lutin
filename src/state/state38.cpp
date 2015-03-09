// ---------------------------------------------
//  state38.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state38.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state34.h" 
#include "state35.h" 
#include "state41.h" 

State38::State38()
    : State("State38")
{
}

State38::~State38()
{
}

bool State38::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PLUS:
            automaton.shift(s, new State34());
            break;

        case MINUS:
            automaton.shift(s, new State35());
            break;

        case CLOSEBY:
            automaton.shift(s, new State41());
            break;

    }
    
    return false;
}
