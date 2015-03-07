// ---------------------------------------------
//  State27.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State27.h"

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
