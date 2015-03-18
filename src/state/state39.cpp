// ---------------------------------------------
//  state39.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state39.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state36.h" 
#include "state37.h" 

State39::State39()
    : State(39)
{
}

State39::~State39()
{
}

bool State39::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State39::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
