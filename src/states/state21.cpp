// ---------------------------------------------
//  State21.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State21.h"

State21::State21()
    : State("State21")
{
}

State21::~State21()
{
}

bool State21::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case ID:
            automaton.shift(s, new S22);
            break;

    }
}
