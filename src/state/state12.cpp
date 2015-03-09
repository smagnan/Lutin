// ---------------------------------------------
//  state12.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state12.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State12::State12()
    : State("State12")
{
}

State12::~State12()
{
}

bool State12::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

    }
    
    return false;
}
