// ---------------------------------------------
//  State5.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE5_H
#define STATE5_H

#include "../automaton.h"

class State5 {
private:
public:
    State5();
    virtual ~State5();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE5_H
