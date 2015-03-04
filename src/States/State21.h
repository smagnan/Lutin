#ifndef STATE_21
#define STATE_21

#include "State_21.h"


class State21: public State
{
	public : 
		State21();
		virtual ~State21();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
