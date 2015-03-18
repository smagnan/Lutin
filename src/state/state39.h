// ---------------------------------------------
//  state39.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE39_H

#define STATE39_H

#include "state.h"

class State39 : public State
{
private:
protected:
public:
    State39();
    virtual ~State39();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE39_H
