// ---------------------------------------------
//  State0.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE0_H
#define STATE0_H

#include "../automaton.h"

class State0 {
private:
public:
    State0();
    virtual ~State0();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE0_H
