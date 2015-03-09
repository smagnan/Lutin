// ---------------------------------------------
//  state6.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state6.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State6::State6()
    : State("State6")
{
}

State6::~State6()
{
}

bool State6::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

    }
    
    return false;
}
