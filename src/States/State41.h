#ifndef STATE_41
#define STATE_41

#include "State_41.h"


class State41: public State
{
	public : 
		State41();
		virtual ~State41();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
