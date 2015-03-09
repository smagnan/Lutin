// ---------------------------------------------
//  state41.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state41.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State41::State41()
    : State("State41")
{
}

State41::~State41()
{
}

bool State41::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

    }
    
    return false;
}
