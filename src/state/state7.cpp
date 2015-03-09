// ---------------------------------------------
//  state7.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state7.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State7::State7()
    : State("State7")
{
}

State7::~State7()
{
}

bool State7::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

    }
    
    return false;
}
