// ---------------------------------------------
//  State28.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State28.h"

State28::State28()
    : State("State28")
{
}

State28::~State28()
{
}

bool State28::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PLUS:
            automaton.shift(s, new S34);
            break;

        case MINUS:
            automaton.shift(s, new S35);
            break;

    }
}
