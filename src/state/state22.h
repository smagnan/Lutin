// ---------------------------------------------
//  state22.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE22_H
#define STATE22_H

#include "state.h"

class State22 : public State
{
private:
protected:
public:
    State22();
    virtual ~State22();
    bool transition(Automaton & automaton, Symbol * s);
};

#endif // STATE22_H
