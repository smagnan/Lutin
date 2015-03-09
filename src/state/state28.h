// ---------------------------------------------
//  state28.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE28_H
#define STATE28_H

#include "state.h"

class State28 : public State
{
private:
protected:
public:
    State28();
    virtual ~State28();
    bool transition(Automaton & automaton, Symbol * s);
};

#endif // STATE28_H
