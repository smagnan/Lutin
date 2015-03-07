// ---------------------------------------------
//  State10.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE10_H
#define STATE10_H

#include "../automaton.h"

class State10 {
private:
public:
    State10();
    virtual ~State10();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE10_H
