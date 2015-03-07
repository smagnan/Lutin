// ---------------------------------------------
//  State29.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State29.h"

State29::State29()
    : State("State29")
{
}

State29::~State29()
{
}

bool State29::transition(Automaton & automaton, Symbol * s)
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
