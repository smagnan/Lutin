// ---------------------------------------------
//  State28.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE28_H
#define STATE28_H

#include "../automaton.h"

class State28 {
private:
public:
    State28();
    virtual ~State28();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE28_H
