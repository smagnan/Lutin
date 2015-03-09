// ---------------------------------------------
//  state19.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE19_H
#define STATE19_H

#include "state.h"

class State19 : public State
{
private:
protected:
public:
    State19();
    virtual ~State19();
    bool transition(Automaton & automaton, Symbol * s);
};

#endif // STATE19_H
