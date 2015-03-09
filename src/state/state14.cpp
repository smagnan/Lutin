// ---------------------------------------------
//  state14.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state14.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State14::State14()
    : State("State14")
{
}

State14::~State14()
{
}

bool State14::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

    }
    
    return false;
}
