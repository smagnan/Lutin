// ---------------------------------------------
//  state8.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state8.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state9.h" 

State8::State8()
    : State(8)
{
}

State8::~State8()
{
}

bool State8::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PV:
            automaton.reduce(6);
            break;

        case VIR:
            automaton.shift(s, new State9());
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}
