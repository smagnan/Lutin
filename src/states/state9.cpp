// ---------------------------------------------
//  State9.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State9.h"

State9::State9()
    : State("State9")
{
}

State9::~State9()
{
}

bool State9::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case ID:
            automaton.shift(s, new S4);
            break;

    }
}
