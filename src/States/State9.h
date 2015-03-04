#ifndef STATE_9
#define STATE_9

#include "State_9.h"


class State9: public State
{
	public : 
		State9();
		virtual ~State9();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
