// ---------------------------------------------
//  State2.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State2.h"

State2::State2()
    : State("State2")
{
}

State2::~State2()
{
}

bool State2::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case VAR:
            automaton.shift(s, new S13);
            break;

        case CONST:
            automaton.shift(s, new S3);
            break;

    }
}
