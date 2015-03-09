// ---------------------------------------------
//  state29.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state29.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state36.h" 
#include "state37.h" 

State29::State29()
    : State("State29")
{
}

State29::~State29()
{
}

bool State29::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case MULT:
            automaton.shift(s, new State36());
            break;

        case DIVIDE:
            automaton.shift(s, new State37());
            break;

    }
    
    return false;
}
