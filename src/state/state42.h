// ---------------------------------------------
//  state42.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE42_H

#define STATE42_H

#include "state.h"

class State42 : public State
{
private:
protected:
public:
    State42();
    virtual ~State42();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE42_H
