#ifndef STATE_4
#define STATE_4

#include "State.h"

class State4: public State
{
	public : 
		State4();
		virtual ~State4();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
