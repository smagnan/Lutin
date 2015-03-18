// ---------------------------------------------
//  state36.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE36_H
#define STATE36_H

#include "state.h"

class State36 : public State
{
private:
protected:
public:
    State36();
    virtual ~State36();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE36_H
