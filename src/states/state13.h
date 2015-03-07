// ---------------------------------------------
//  State13.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE13_H
#define STATE13_H

#include "../automaton.h"

class State13 {
private:
public:
    State13();
    virtual ~State13();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE13_H
