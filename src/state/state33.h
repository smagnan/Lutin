// ---------------------------------------------
//  state33.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE33_H
#define STATE33_H

#include "state.h"

class State33 : public State
{
private:
protected:
public:
    State33();
    virtual ~State33();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE33_H
