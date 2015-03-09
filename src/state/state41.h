// ---------------------------------------------
//  state41.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE41_H
#define STATE41_H

#include "state.h"

class State41 : public State
{
private:
protected:
public:
    State41();
    virtual ~State41();
    bool transition(Automaton & automaton, Symbol * s);
};

#endif // STATE41_H
