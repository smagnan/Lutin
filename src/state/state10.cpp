// ---------------------------------------------
//  state10.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state10.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State10::State10()
    : State("State10")
{
}

State10::~State10()
{
}

bool State10::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

    }
    
    return false;
}
