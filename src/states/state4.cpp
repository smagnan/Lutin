// ---------------------------------------------
//  State4.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "State4.h"

State4::State4()
    : State("State4")
{
}

State4::~State4()
{
}

bool State4::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case EG:
            automaton.shift(s, new S5);
            break;

    }
}
