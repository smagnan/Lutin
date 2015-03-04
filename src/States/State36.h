#ifndef STATE_36
#define STATE_36

#include "State.h"

class State36: public State
{
	public : 
		State36();
		virtual ~State36();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
