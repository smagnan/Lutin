#ifndef STATE_40
#define STATE_40

#include "State.h"

class State40: public State
{
	public : 
		State40();
		virtual ~State40();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
