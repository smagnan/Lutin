// ---------------------------------------------
//  State33.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE33_H
#define STATE33_H

#include "../automaton.h"

class State33 {
private:
public:
    State33();
    virtual ~State33();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE33_H
