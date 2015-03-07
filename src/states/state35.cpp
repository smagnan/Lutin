// ---------------------------------------------
//  State35.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State35.h"

State35::State35()
    : State("State35")
{
}

State35::~State35()
{
}

bool State35::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case OPENBY:
            automaton.shift(s, new S31);
            break;

        case ID:
            automaton.shift(s, new S32);
            break;

        case NUM:
            automaton.shift(s, new S33);
            break;

    }
}
