// ---------------------------------------------
//  State9.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE9_H
#define STATE9_H

#include "../automaton.h"

class State9 {
private:
public:
    State9();
    virtual ~State9();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE9_H
