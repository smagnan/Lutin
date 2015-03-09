// ---------------------------------------------
//  state34.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE34_H
#define STATE34_H

#include "state.h"

class State34 : public State
{
private:
protected:
public:
    State34();
    virtual ~State34();
    bool transition(Automaton & automaton, Symbol * s);
};

#endif // STATE34_H
