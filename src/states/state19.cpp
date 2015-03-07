// ---------------------------------------------
//  State19.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State19.h"

State19::State19()
    : State("State19")
{
}

State19::~State19()
{
}

bool State19::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PV:
            automaton.shift(s, new S20);
            break;

    }
}
