// ---------------------------------------------
//  State21.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE21_H
#define STATE21_H

#include "../automaton.h"

class State21 {
private:
public:
    State21();
    virtual ~State21();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE21_H
