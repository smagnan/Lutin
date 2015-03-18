// ---------------------------------------------
//  state27.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state27.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state31.h" 
#include "state32.h" 
#include "state33.h" 

State27::State27()
    : State(27)
{
}

State27::~State27()
{
}

bool State27::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State27::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
