#ifndef STATE_39
#define STATE_39

#include "State.h"

class State39: public State
{
	public : 
		State39();
		virtual ~State39();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
