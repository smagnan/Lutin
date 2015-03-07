// ---------------------------------------------
//  State15.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State15.h"

State15::State15()
    : State("State15")
{
}

State15::~State15()
{
}

bool State15::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case VIR:
            automaton.shift(s, new S16);
            break;

    }
}
