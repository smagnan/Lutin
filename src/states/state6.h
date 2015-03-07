// ---------------------------------------------
//  State6.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE6_H
#define STATE6_H

#include "../automaton.h"

class State6 {
private:
public:
    State6();
    virtual ~State6();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE6_H
