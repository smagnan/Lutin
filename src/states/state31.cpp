// ---------------------------------------------
//  State31.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State31.h"

State31::State31()
    : State("State31")
{
}

State31::~State31()
{
}

bool State31::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case OPENBY:
            automaton.shift(s, new S31);
            break;

        case ID:
            automaton.shift(s, new S33);
            break;

        case NUM:
            automaton.shift(s, new S32);
            break;

    }
}
