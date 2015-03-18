// ---------------------------------------------
//  state5.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state5.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state6.h" 

State5::State5()
    : State(5)
{
}

State5::~State5()
{
}

bool State5::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State5::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
