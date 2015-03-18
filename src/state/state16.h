// ---------------------------------------------
//  state16.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE16_H
#define STATE16_H

#include "state.h"

class State16 : public State
{
private:
protected:
public:
    State16();
    virtual ~State16();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE16_H
