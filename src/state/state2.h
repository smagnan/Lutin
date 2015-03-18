// ---------------------------------------------
//  state2.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE2_H
#define STATE2_H

#include "state.h"

class State2 : public State
{
private:
protected:
public:
    State2();
    virtual ~State2();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE2_H
