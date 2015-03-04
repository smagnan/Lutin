#ifndef STATE_7
#define STATE_7

#include "State.h"

class State7: public State
{
	public : 
		State7();
		virtual ~State7();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
