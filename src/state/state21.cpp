// ---------------------------------------------
//  state21.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state21.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state22.h" 

State21::State21()
    : State("State21")
{
}

State21::~State21()
{
}

bool State21::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case ID:
            automaton.shift(s, new State22());
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}
