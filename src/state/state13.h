// ---------------------------------------------
//  state13.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE13_H

#define STATE13_H

#include "state.h"

class State13 : public State
{
private:
protected:
public:
    State13();
    virtual ~State13();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE13_H
