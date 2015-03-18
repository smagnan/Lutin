// ---------------------------------------------
//  state21.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE21_H
#define STATE21_H

#include "state.h"

class State21 : public State
{
private:
protected:
public:
    State21();
    virtual ~State21();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE21_H
