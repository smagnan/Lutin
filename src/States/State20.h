#ifndef STATE_20
#define STATE_20

#include "State.h"

class State20: public State
{
	public : 
		State20();
		virtual ~State20();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
