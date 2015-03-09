// ---------------------------------------------
//  state22.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state22.h"
#include "../symbol/symbol.h"
#include "../automaton.h"



State22::State22()
    : State("State22")
{
}

State22::~State22()
{
}

bool State22::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

    }
    
    return false;
}
