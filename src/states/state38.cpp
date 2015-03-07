// ---------------------------------------------
//  State38.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State38.h"

State38::State38()
    : State("State38")
{
}

State38::~State38()
{
}

bool State38::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case PLUS:
            automaton.shift(s, new S34);
            break;

        case MINUS:
            automaton.shift(s, new S35);
            break;

        case CLOSEBY:
            automaton.shift(s, new S41);
            break;

    }
}
