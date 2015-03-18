// ---------------------------------------------
//  state11.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE11_H

#define STATE11_H

#include "state.h"

class State11 : public State
{
private:
protected:
public:
    State11();
    virtual ~State11();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE11_H
