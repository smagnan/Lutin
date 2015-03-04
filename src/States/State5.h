#ifndef STATE_5
#define STATE_5

#include "State.h"

class State5: public State
{
	public : 
		State5();
		virtual ~State5();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
