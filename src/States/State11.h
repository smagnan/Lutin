#ifndef STATE_11
#define STATE_11

#include "State_11.h"


class State11: public State
{
	public : 
		State11();
		virtual ~State11();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
