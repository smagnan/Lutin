// ---------------------------------------------
//  state27.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE27_H

#define STATE27_H

#include "state.h"

class State27 : public State
{
private:
protected:
public:
    State27();
    virtual ~State27();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE27_H
