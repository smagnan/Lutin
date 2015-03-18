// ---------------------------------------------
//  state35.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state35.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state31.h" 
#include "state32.h" 
#include "state33.h" 

State35::State35()
    : State(35)
{
}

State35::~State35()
{
}

bool State35::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State35::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
