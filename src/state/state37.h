// ---------------------------------------------
//  state37.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE37_H
#define STATE37_H

#include "state.h"

class State37 : public State
{
private:
protected:
public:
    State37();
    virtual ~State37();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE37_H
