// ---------------------------------------------
//  State31.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE31_H
#define STATE31_H

#include "../automaton.h"

class State31 {
private:
public:
    State31();
    virtual ~State31();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE31_H
