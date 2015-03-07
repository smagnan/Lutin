// ---------------------------------------------
//  State3.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State3.h"

State3::State3()
    : State("State3")
{
}

State3::~State3()
{
}

bool State3::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case ID:
            automaton.shift(s, new S4);
            break;

    }
}
