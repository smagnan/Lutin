#ifndef STATE_24
#define STATE_24

#include "State_24.h"


class State24: public State
{
	public : 
		State24();
		virtual ~State24();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
