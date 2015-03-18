// ---------------------------------------------
//  state38.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE38_H
#define STATE38_H

#include "state.h"

class State38 : public State
{
private:
protected:
public:
    State38();
    virtual ~State38();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE38_H
