// ---------------------------------------------
//  state20.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state20.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State20::State20()
    : State("State20")
{
}

State20::~State20()
{
}

bool State20::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

    }
    
    return false;
}
