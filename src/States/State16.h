#ifndef STATE_16
#define STATE_16

#include "State_16.h"


class State16: public State
{
	public : 
		State16();
		virtual ~State16();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
