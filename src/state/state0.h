// ---------------------------------------------
//  state0.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE0_H

#define STATE0_H

#include "state.h"

class State0 : public State
{
private:
protected:
public:
    State0();
    virtual ~State0();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE0_H
