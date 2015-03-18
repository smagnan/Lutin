// ---------------------------------------------
//  state24.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE24_H
#define STATE24_H

#include "state.h"

class State24 : public State
{
private:
protected:
public:
    State24();
    virtual ~State24();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE24_H
