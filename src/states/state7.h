// ---------------------------------------------
//  State7.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE7_H
#define STATE7_H

#include "../automaton.h"

class State7 {
private:
public:
    State7();
    virtual ~State7();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE7_H
