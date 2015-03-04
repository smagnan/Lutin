#ifndef STATE_9
#define STATE_9

#include "State.h"

class State9: public State
{
	public : 
		State9();
		virtual ~State9();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
