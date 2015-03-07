// ---------------------------------------------
//  State19.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE19_H
#define STATE19_H

#include "../automaton.h"

class State19 {
private:
public:
    State19();
    virtual ~State19();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE19_H
