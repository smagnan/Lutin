// ---------------------------------------------
//  State8.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State8.h"

State8::State8()
    : State("State8")
{
}

State8::~State8()
{
}

bool State8::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case VIR:
            automaton.shift(s, new S9);
            break;

    }
}
