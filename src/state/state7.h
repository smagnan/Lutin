// ---------------------------------------------
//  state7.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE7_H
#define STATE7_H

#include "state.h"

class State7 : public State
{
private:
protected:
public:
    State7();
    virtual ~State7();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE7_H
