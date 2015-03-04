#ifndef STATE_32
#define STATE_32

#include "State.h"

class State32: public State
{
	public : 
		State32();
		virtual ~State32();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
