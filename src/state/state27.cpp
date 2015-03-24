// ---------------------------------------------
//  state27.cpp
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#include "state27.h"
#include "../symbol/symbol.h"
#include "../automaton.h"


#include "state31.h" 
#include "state32.h" 
#include "state33.h" 
#include "state28.h" 
#include "state26.h" 
#include "state29.h" 
#include "state30.h" 

State27::State27()
    : State(27)
{
}

State27::~State27()
{
}

bool State27::transition(Automaton & automaton, Symbol * s)
{
    switch(*s)
    {

        case OPENBY:
            automaton.shift(s, new State31());
            break;

        case ID:
            automaton.shift(s, new State32());
            break;

        case NUM:
            automaton.shift(s, new State33());
            break;

        default:
            automaton.error();
            break;

    }
    
    return false;
}

State* State27::getNextState(Symbol * s)
{
    switch(*s)
    {

        case E:
            return new State28();

        case EPRIME:
            return new State26();

        case T:
            return new State29();

        case F:
            return new State30();

        default:
            break;
    }
    
    return 0;
}
