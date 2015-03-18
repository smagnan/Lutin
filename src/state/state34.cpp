// ---------------------------------------------
//  state34.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state34.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state31.h" 
#include "state32.h" 
#include "state33.h" 

State34::State34()
    : State(34)
{
}

State34::~State34()
{
}

bool State34::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State34::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
