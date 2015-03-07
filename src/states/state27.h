// ---------------------------------------------
//  State27.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE27_H
#define STATE27_H

#include "../automaton.h"

class State27 {
private:
public:
    State27();
    virtual ~State27();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE27_H
