// ---------------------------------------------
//  State42.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE42_H
#define STATE42_H

#include "../automaton.h"

class State42 {
private:
public:
    State42();
    virtual ~State42();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE42_H
