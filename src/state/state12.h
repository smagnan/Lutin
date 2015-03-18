// ---------------------------------------------
//  state12.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE12_H
#define STATE12_H

#include "state.h"

class State12 : public State
{
private:
protected:
public:
    State12();
    virtual ~State12();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE12_H
