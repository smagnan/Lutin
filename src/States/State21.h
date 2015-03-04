#ifndef STATE_21
#define STATE_21

#include "State.h"

class State21: public State
{
	public : 
		State21();
		virtual ~State21();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
