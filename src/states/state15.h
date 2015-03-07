// ---------------------------------------------
//  State15.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE15_H
#define STATE15_H

#include "../automaton.h"

class State15 {
private:
public:
    State15();
    virtual ~State15();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE15_H
