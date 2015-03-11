// ---------------------------------------------
//  state1.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state1.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State1::State1()
    : State("State1")
{
}

State1::~State1()
{
}

bool State1::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case END:
            automaton.accept();
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}
