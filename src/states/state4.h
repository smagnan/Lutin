// ---------------------------------------------
//  State4.h
//
//	Created	 :
//		by 	 : Pierre GODARD
//
// ---------------------------------------------

#ifndef STATE4_H
#define STATE4_H

#include "../automaton.h"

class State4 {
private:
public:
    State4();
    virtual ~State4();
    bool transition(Automaton & automaton, Symbol * s);
}

#endif // STATE4_H
