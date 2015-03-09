// ---------------------------------------------
//  state43.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state43.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State43::State43()
    : State("State43")
{
}

State43::~State43()
{
}

bool State43::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

    }
    
    return false;
}
