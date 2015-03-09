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
    : State("State27")
{
}

State27::~State27()
{
}

bool State27::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case OPENBY:
            automaton.shift(s, new State31());
            break;

        case ID:
            automaton.shift(s, new State32());
            break;

        case NUM:
            automaton.shift(s, new State33());
            break;

    }
    
    return false;
}
