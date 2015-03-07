// ---------------------------------------------
//  State22.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE22_H
#define STATE22_H

#include "../automaton.h"

class State22 {
private:
public:
    State22();
    virtual ~State22();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE22_H
