// ---------------------------------------------
//  state4.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE4_H

#define STATE4_H

#include "state.h"

class State4 : public State
{
private:
protected:
public:
    State4();
    virtual ~State4();
    bool transition(Automaton & automaton, Symbol * s);
    State* getNextState(Symbol * s);
};

#endif // STATE4_H
