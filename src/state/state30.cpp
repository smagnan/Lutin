// ---------------------------------------------
//  state30.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state30.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State30::State30()
    : State("State30")
{
}

State30::~State30()
{
}

bool State30::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

    }
    
    return false;
}
