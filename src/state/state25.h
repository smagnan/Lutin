// ---------------------------------------------
//  state25.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE25_H
#define STATE25_H

#include "state.h"

class State25 : public State
{
private:
protected:
public:
    State25();
    virtual ~State25();
    bool transition(Automaton & automaton, Symbol * s);
};

#endif // STATE25_H
