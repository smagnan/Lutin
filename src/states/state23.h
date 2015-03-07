// ---------------------------------------------
//  State23.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE23_H
#define STATE23_H

#include "../automaton.h"

class State23 {
private:
public:
    State23();
    virtual ~State23();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE23_H
