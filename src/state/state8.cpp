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
    : State("State8")
{
}

State8::~State8()
{
}

bool State8::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case VIR:
            automaton.shift(s, new State9());
            break;

    }
    
    return false;
}
