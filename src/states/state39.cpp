// ---------------------------------------------
//  State39.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State39.h"

State39::State39()
    : State("State39")
{
}

State39::~State39()
{
}

bool State39::transition(Automaton & automaton, Symbol * s)
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
