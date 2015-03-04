#ifndef STATE_13
#define STATE_13

#include "State.h"

class State13: public State
{
	public : 
		State13();
		virtual ~State13();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
