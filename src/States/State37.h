#ifndef STATE_37
#define STATE_37

#include "State.h"

class State37: public State
{
	public : 
		State37();
		virtual ~State37();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
