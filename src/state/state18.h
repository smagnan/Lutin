// ---------------------------------------------
//  state18.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE18_H
#define STATE18_H

#include "state.h"

class State18 : public State
{
private:
protected:
public:
    State18();
    virtual ~State18();
    bool transition(Automaton & automaton, Symbol * s);
};

#endif // STATE18_H
