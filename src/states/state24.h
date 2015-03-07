// ---------------------------------------------
//  State24.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE24_H
#define STATE24_H

#include "../automaton.h"

class State24 {
private:
public:
    State24();
    virtual ~State24();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE24_H
