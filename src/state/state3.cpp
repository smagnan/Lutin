// ---------------------------------------------
//  state3.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state3.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state4.h" 

State3::State3()
    : State(3)
{
}

State3::~State3()
{
}

bool State3::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State3::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
