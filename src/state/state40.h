// ---------------------------------------------
//  state40.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE40_H
#define STATE40_H

#include "state.h"

class State40 : public State
{
private:
protected:
public:
    State40();
    virtual ~State40();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE40_H
