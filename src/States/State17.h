#ifndef STATE_17
#define STATE_17

#include "State.h"

class State17: public State
{
	public : 
		State17();
		virtual ~State17();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
