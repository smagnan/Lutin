// ---------------------------------------------
//  state6.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE6_H
#define STATE6_H

#include "state.h"

class State6 : public State
{
private:
protected:
public:
    State6();
    virtual ~State6();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE6_H
