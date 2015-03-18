// ---------------------------------------------
//  state20.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE20_H
#define STATE20_H

#include "state.h"

class State20 : public State
{
private:
protected:
public:
    State20();
    virtual ~State20();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE20_H
