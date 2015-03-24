// ---------------------------------------------
//  state9.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE9_H

#define STATE9_H

#include "state.h"

class State9 : public State
{
private:
protected:
public:
    State9();
    virtual ~State9();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE9_H
