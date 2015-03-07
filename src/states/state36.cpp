// ---------------------------------------------
//  State36.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State36.h"

State36::State36()
    : State("State36")
{
}

State36::~State36()
{
}

bool State36::transition(Automaton & automaton, Symbol * s)
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
