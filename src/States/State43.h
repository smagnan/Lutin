#ifndef STATE_43
#define STATE_43

#include "State_43.h"


class State43: public State
{
	public : 
		State43();
		virtual ~State43();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
