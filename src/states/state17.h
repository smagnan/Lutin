// ---------------------------------------------
//  State17.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE17_H
#define STATE17_H

#include "../automaton.h"

class State17 {
private:
public:
    State17();
    virtual ~State17();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE17_H
