// ---------------------------------------------
//  state32.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE32_H
#define STATE32_H

#include "state.h"

class State32 : public State
{
private:
protected:
public:
    State32();
    virtual ~State32();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE32_H
