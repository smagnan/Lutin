// ---------------------------------------------
//  State11.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State11.h"

State11::State11()
    : State("State11")
{
}

State11::~State11()
{
}

bool State11::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PV:
            automaton.shift(s, new S12);
            break;

    }
}
