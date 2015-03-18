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
    : State(21)
{
}

State21::~State21()
{
}

bool State21::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State21::getNextState(Symbol * s)
{
    switch(*s)
    {

        default:
            break;
    }
    
    return 0;
}
