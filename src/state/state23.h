// ---------------------------------------------
//  state23.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE23_H
#define STATE23_H

#include "state.h"

class State23 : public State
{
private:
protected:
public:
    State23();
    virtual ~State23();
    bool transition(Automaton & automaton, Symbol * s);
};

#endif // STATE23_H
