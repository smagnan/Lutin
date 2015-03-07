// ---------------------------------------------
//  State29.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE29_H
#define STATE29_H

#include "../automaton.h"

class State29 {
private:
public:
    State29();
    virtual ~State29();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE29_H
