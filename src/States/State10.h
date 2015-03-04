#ifndef STATE_10
#define STATE_10

#include "State_10.h"


class State10: public State
{
	public : 
		State10();
		virtual ~State10();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
