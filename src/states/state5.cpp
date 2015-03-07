// ---------------------------------------------
//  State5.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State5.h"

State5::State5()
    : State("State5")
{
}

State5::~State5()
{
}

bool State5::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case NUM:
            automaton.shift(s, new S6);
            break;

    }
}
