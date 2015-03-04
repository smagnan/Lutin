#ifndef STATE_1
#define STATE_1

#include "State_1.h"


class State1: public State
{
	public : 
		State1();
		virtual ~State1();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
