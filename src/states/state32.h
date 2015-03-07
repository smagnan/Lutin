// ---------------------------------------------
//  State32.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE32_H
#define STATE32_H

#include "../automaton.h"

class State32 {
private:
public:
    State32();
    virtual ~State32();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE32_H
