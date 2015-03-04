#ifndef STATE_18
#define STATE_18

#include "State_18.h"


class State18: public State
{
	public : 
		State18();
		virtual ~State18();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
