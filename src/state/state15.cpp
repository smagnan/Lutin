// ---------------------------------------------
//  state15.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state15.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state16.h" 

State15::State15()
    : State("State15")
{
}

State15::~State15()
{
}

bool State15::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case VIR:
            automaton.shift(s, new State16());
            break;

    }
    
    return false;
}
