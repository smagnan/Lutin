#ifndef STATE_30
#define STATE_30

#include "State.h"

class State30: public State
{
	public : 
		State30();
		virtual ~State30();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
