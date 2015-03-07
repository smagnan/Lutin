// ---------------------------------------------
//  State12.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE12_H
#define STATE12_H

#include "../automaton.h"

class State12 {
private:
public:
    State12();
    virtual ~State12();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE12_H
