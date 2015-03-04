#ifndef STATE_26
#define STATE_26

#include "State.h"

class State26: public State
{
	public : 
		State26();
		virtual ~State26();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
