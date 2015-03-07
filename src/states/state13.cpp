// ---------------------------------------------
//  State13.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State13.h"

State13::State13()
    : State("State13")
{
}

State13::~State13()
{
}

bool State13::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case ID:
            automaton.shift(s, new S14);
            break;

    }
}
