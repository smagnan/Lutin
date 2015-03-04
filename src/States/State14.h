#ifndef STATE_14
#define STATE_14

#include "State_14.h"


class State14: public State
{
	public : 
		State14();
		virtual ~State14();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
