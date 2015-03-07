// ---------------------------------------------
//  State42.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State42.h"

State42::State42()
    : State("State42")
{
}

State42::~State42()
{
}

bool State42::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case MULT:
            automaton.shift(s, new S36);
            break;

        case DIVIDE:
            automaton.shift(s, new S37);
            break;

    }
}
