// ---------------------------------------------
//  State36.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE36_H
#define STATE36_H

#include "../automaton.h"

class State36 {
private:
public:
    State36();
    virtual ~State36();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE36_H
