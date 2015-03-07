// ---------------------------------------------
//  State14.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE14_H
#define STATE14_H

#include "../automaton.h"

class State14 {
private:
public:
    State14();
    virtual ~State14();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE14_H
