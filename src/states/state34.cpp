// ---------------------------------------------
//  State34.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State34.h"

State34::State34()
    : State("State34")
{
}

State34::~State34()
{
}

bool State34::transition(Automaton & automaton, Symbol * s)
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
