// ---------------------------------------------
//  state31.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE31_H
#define STATE31_H

#include "state.h"

class State31 : public State
{
private:
protected:
public:
    State31();
    virtual ~State31();
    bool transition(Automaton & automaton, Symbol * s);
};

#endif // STATE31_H
