// ---------------------------------------------
//  State30.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE30_H
#define STATE30_H

#include "../automaton.h"

class State30 {
private:
public:
    State30();
    virtual ~State30();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE30_H
