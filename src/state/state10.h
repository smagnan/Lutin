// ---------------------------------------------
//  state10.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE10_H
#define STATE10_H

#include "state.h"

class State10 : public State
{
private:
protected:
public:
    State10();
    virtual ~State10();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE10_H
