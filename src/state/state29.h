// ---------------------------------------------
//  state29.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE29_H

#define STATE29_H

#include "state.h"

class State29 : public State
{
private:
protected:
public:
    State29();
    virtual ~State29();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE29_H
