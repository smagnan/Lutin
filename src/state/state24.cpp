// ---------------------------------------------
//  state24.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state24.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state31.h" 
#include "state32.h" 
#include "state33.h" 

State24::State24()
    : State(24)
{
}

State24::~State24()
{
}

bool State24::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State24::getNextState(Symbol * s)
{
    switch(*s)
    {

        case E:
            return new State28();

        case EPRIME:
            return new State25();

        case T:
            return new State29();

        case F:
            return new State30();

        default:
            break;
    }
    
    return 0;
}
