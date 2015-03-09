// ---------------------------------------------
//  state26.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE26_H
#define STATE26_H

#include "state.h"

class State26 : public State
{
private:
protected:
public:
    State26();
    virtual ~State26();
    bool transition(Automaton & automaton, Symbol * s);
};

#endif // STATE26_H
