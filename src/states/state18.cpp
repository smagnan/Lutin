// ---------------------------------------------
//  State18.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State18.h"

State18::State18()
    : State("State18")
{
}

State18::~State18()
{
}

bool State18::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case ID:
            automaton.shift(s, new S23);
            break;

        case ECRIRE:
            automaton.shift(s, new S24);
            break;

        case LIRE:
            automaton.shift(s, new S21);
            break;

    }
}
