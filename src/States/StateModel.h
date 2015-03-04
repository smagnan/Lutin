#ifndef STATE_numero
#define STATE_numero

#include "State_numero.h"


class Statenumero: public State
{
	public : 
		Statenumero();
		virtual ~Statenumero();
		bool transition(Automaton & automaton, Symbol * s);
};


#endif
