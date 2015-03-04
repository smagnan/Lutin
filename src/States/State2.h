#ifndef STATE_2
#define STATE_2

#include "State_2.h"


class State2: public State
{
	public : 
		State2();
		virtual ~State2();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
