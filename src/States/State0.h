#ifndef STATE_0
#define STATE_0

#include "State.h"

class State0: public State
{
	public : 
		State0();
		virtual ~State0();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
