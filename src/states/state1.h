// ---------------------------------------------
//  State1.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE1_H
#define STATE1_H

#include "../automaton.h"

class State1 {
private:
public:
    State1();
    virtual ~State1();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE1_H
