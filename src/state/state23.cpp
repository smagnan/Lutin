// ---------------------------------------------
//  state23.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state23.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state27.h" 

State23::State23()
    : State(23)
{
}

State23::~State23()
{
}

bool State23::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State23::getNextState(Symbol * s)
{
    switch(*s)
    {
    
    }
    
    return 0;
}
