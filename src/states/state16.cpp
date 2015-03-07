// ---------------------------------------------
//  State16.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State16.h"

State16::State16()
    : State("State16")
{
}

State16::~State16()
{
}

bool State16::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case ID:
            automaton.shift(s, new S17);
            break;

    }
}
