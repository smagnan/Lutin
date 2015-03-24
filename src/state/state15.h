// ---------------------------------------------
//  state15.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE15_H

#define STATE15_H

#include "state.h"

class State15 : public State
{
private:
protected:
public:
    State15();
    virtual ~State15();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE15_H
