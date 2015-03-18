// ---------------------------------------------
//  state17.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE17_H
#define STATE17_H

#include "state.h"

class State17 : public State
{
private:
protected:
public:
    State17();
    virtual ~State17();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE17_H
