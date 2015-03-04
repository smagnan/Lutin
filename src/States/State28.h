#ifndef STATE_28
#define STATE_28

#include "State.h"

class State28: public State
{
	public : 
		State28();
		virtual ~State28();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
