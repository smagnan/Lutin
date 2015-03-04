#ifndef STATE_38
#define STATE_38

#include "State.h"

class State38: public State
{
	public : 
		State38();
		virtual ~State38();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
