#ifndef STATE_35
#define STATE_35

#include "State.h"

class State35: public State
{
	public : 
		State35();
		virtual ~State35();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
