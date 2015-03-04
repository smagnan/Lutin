#ifndef STATE_34
#define STATE_34

#include "State_34.h"


class State34: public State
{
	public : 
		State34();
		virtual ~State34();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
