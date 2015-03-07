// ---------------------------------------------
//  State23.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State23.h"

State23::State23()
    : State("State23")
{
}

State23::~State23()
{
}

bool State23::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case AFF:
            automaton.shift(s, new S27);
            break;

    }
}
