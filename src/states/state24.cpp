// ---------------------------------------------
//  State24.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State24.h"

State24::State24()
    : State("State24")
{
}

State24::~State24()
{
}

bool State24::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case OPENBY:
            automaton.shift(s, new S31);
            break;

        case ID:
            automaton.shift(s, new S32);
            break;

        case NUM:
            automaton.shift(s, new S33);
            break;

    }
}
