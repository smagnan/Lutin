// ---------------------------------------------
//  state1.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE1_H
#define STATE1_H

#include "state.h"

class State1 : public State
{
private:
protected:
public:
    State1();
    virtual ~State1();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE1_H
