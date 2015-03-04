#ifndef STATE_22
#define STATE_22

#include "State.h"

class State22: public State
{
	public : 
		State22();
		virtual ~State22();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
