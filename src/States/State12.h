#ifndef STATE_12
#define STATE_12

#include "State.h"

class State12: public State
{
	public : 
		State12();
		virtual ~State12();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
