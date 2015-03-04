#ifndef STATE_19
#define STATE_19

#include "State.h"

class State19: public State
{
	public : 
		State19();
		virtual ~State19();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
