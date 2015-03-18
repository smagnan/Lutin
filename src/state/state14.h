// ---------------------------------------------
//  state14.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE14_H
#define STATE14_H

#include "state.h"

class State14 : public State
{
private:
protected:
public:
    State14();
    virtual ~State14();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE14_H
