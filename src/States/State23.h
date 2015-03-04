#ifndef STATE_23
#define STATE_23

#include "State_23.h"


class State23: public State
{
	public : 
		State23();
		virtual ~State23();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
