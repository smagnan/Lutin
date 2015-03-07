// ---------------------------------------------
//  State37.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE37_H
#define STATE37_H

#include "../automaton.h"

class State37 {
private:
public:
    State37();
    virtual ~State37();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE37_H
