// ---------------------------------------------
//  state3.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE3_H

#define STATE3_H

#include "state.h"

class State3 : public State
{
private:
protected:
public:
    State3();
    virtual ~State3();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE3_H
