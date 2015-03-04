#ifndef STATE_29
#define STATE_29

#include "State.h"

class State29: public State
{
	public : 
		State29();
		virtual ~State29();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
