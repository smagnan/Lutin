// ---------------------------------------------
//  state0.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state0.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State0::State0()
    : State("State0")
{
}

State0::~State0()
{
}

bool State0::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

    }
    
    return false;
}