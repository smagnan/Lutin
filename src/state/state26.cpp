// ---------------------------------------------
//  state26.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state26.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State26::State26()
    : State("State26")
{
}

State26::~State26()
{
}

bool State26::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

    }
    
    return false;
}
