#ifndef STATE_6
#define STATE_6

#include "State.h"

class State6: public State
{
	public : 
		State6();
		virtual ~State6();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
