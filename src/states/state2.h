// ---------------------------------------------
//  State2.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE2_H
#define STATE2_H

#include "../automaton.h"

class State2 {
private:
public:
    State2();
    virtual ~State2();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE2_H
