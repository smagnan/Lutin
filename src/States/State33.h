#ifndef STATE_33
#define STATE_33

#include "State_33.h"


class State33: public State
{
	public : 
		State33();
		virtual ~State33();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
