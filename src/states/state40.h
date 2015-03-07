// ---------------------------------------------
//  State40.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE40_H
#define STATE40_H

#include "../automaton.h"

class State40 {
private:
public:
    State40();
    virtual ~State40();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE40_H
