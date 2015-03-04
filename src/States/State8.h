#ifndef STATE_8
#define STATE_8

#include "State.h"

class State8: public State
{
	public : 
		State8();
		virtual ~State8();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
