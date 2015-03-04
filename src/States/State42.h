#ifndef STATE_42
#define STATE_42

#include "State.h"

class State42: public State
{
	public : 
		State42();
		virtual ~State42();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
