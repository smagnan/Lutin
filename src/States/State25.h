#ifndef STATE_25
#define STATE_25

#include "State_25.h"


class State25: public State
{
	public : 
		State25();
		virtual ~State25();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
