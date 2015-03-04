#ifndef STATE_27
#define STATE_27

#include "State.h"

class State27: public State
{
	public : 
		State27();
		virtual ~State27();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
