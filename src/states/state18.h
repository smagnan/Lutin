// ---------------------------------------------
//  State18.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE18_H
#define STATE18_H

#include "../automaton.h"

class State18 {
private:
public:
    State18();
    virtual ~State18();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE18_H
