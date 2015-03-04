#ifndef STATE_31
#define STATE_31

#include "State.h"

class State31: public State
{
	public : 
		State31();
		virtual ~State31();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
