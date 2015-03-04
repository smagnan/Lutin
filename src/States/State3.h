#ifndef STATE_3
#define STATE_3

#include "State_3.h"


class State3: public State
{
	public : 
		State3();
		virtual ~State3();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
